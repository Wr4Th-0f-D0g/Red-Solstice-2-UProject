#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnvironmentObjectBase.h"
#include "UsableSkillActor.generated.h"

class APawn;
class UAbilityBase;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API AUsableSkillActor : public AEnvironmentObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRangeOverride;
    
    AUsableSkillActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleInteractionAborted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityReset(UAbilityBase* OwnedAbility, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateSkill(USkill* InSkill);
    
};

