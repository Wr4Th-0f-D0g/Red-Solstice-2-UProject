#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasicAIMarineStateChangedDelegate.h"
#include "CharacterWeaponData.h"
#include "EBasicAIMarineState.h"
#include "SolsticeCharacterBase.h"
#include "BasicSolsticeAI.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ABasicSolsticeAI : public ASolsticeCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicAIMarineStateChanged OnCurrentStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLocationRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLocationRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayerRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBasicAIMarineState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* RoamingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* TempRoamingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RoamingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData DefaultWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterWeaponData> RandomWeaponData;
    
public:
    ABasicSolsticeAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartRoamingWithPlayers();
    
    UFUNCTION(BlueprintCallable)
    void SetTempRoamingPlayer(ASolsticeCharacterBase* InTempRoamingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetRoamingPlayerMinMaxRadius(float MinRadius, float MaxRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetRoamingLocationMinMaxRadius(const FVector& Location, float MinRadius, float MaxRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EBasicAIMarineState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CurrentStateChanged(EBasicAIMarineState NewState, EBasicAIMarineState PrevState);
    
};

