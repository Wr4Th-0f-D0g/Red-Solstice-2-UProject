#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BotAbilityDefinition.h"
#include "EActivationFailure.h"
#include "BotSkillOverrideBase.generated.h"

class AAIMarineHeroCharacterBase;
class APawn;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API UBotSkillOverrideBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriendlyUseSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresManualMoveToPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualMoveToGoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkillUsageSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresDoubleActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIMarineHeroCharacterBase> MarineBot;
    
    UBotSkillOverrideBase();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSkillUsageSelf(bool bInSkillUsageSelf) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetupOverride(APawn* PawnInstigator, FBotAbilityDefinition Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFired(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFailedToActivate(EActivationFailure Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeactivated(float Percent, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConfirmed(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnCharged(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnActivated(FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAborted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanDeactivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanConfirm(bool bOnDeactivation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanAbort() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckForValidSkillUsage(APawn* OwningPawn, USkill* Skill);
    
};

