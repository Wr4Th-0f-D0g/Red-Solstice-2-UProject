#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractableComponent.h"
#include "UsableSkillComponent.generated.h"

class UAbilityBase;
class USkill;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UUsableSkillComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeManuallyTargeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRangeOverride;
    
    UUsableSkillComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartCooldown();
    
    UFUNCTION(BlueprintCallable)
    void HandleCooldownReadyChanged(UAbilityBase* OwnedAbility, bool bCooldownReady, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityReset(UAbilityBase* OwnedAbility, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetSkills() const;
    
};

