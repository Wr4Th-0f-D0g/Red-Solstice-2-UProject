#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFiringState.h"
#include "StateObjectData.h"
#include "WeaponStateBase.generated.h"

class ASolsticeCharacterBase;
class ASolsticeWeaponBase;

UCLASS(Blueprintable)
class TWINSTICK_API UWeaponStateBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringState ObjectFiringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAutoTransitionToNextState;
    
    UWeaponStateBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(ASolsticeWeaponBase* Weapon, float DeltaTIme);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExit(ASolsticeWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnter(ASolsticeWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStateObjectData GetStateObjectData(ASolsticeWeaponBase* Weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetNextFiringState(ASolsticeWeaponBase* Weapon, EFiringState& OutNextState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringState GetFiringState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetCharacterOwner(ASolsticeWeaponBase* Weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cleanup(ASolsticeWeaponBase* Weapon);
    
};

