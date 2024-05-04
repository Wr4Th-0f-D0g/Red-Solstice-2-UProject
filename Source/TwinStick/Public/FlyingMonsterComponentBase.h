#pragma once
#include "CoreMinimal.h"
#include "EFlyingState.h"
#include "MonsterComponentBase.h"
#include "FlyingMonsterComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFlyingMonsterComponentBase : public UMonsterComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighAirborneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAirborneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlyingState, meta=(AllowPrivateAccess=true))
    EFlyingState FlyingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlyingState PrevFlyingState;
    
public:
    UFlyingMonsterComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryGotoState(EFlyingState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlyingState(EFlyingState OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedFlyingState(EFlyingState NewState, EFlyingState OldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFlyingState K2_GetPrevFlyingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFlyingState K2_GetFlyingState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCanSwitchState(EFlyingState NewState, EFlyingState CurrentState);
    
};

