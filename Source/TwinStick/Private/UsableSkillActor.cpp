#include "UsableSkillActor.h"

AUsableSkillActor::AUsableSkillActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(2);
    this->bOverrideActivationRange = false;
    this->ActivationRangeOverride = 5000.00f;
}

void AUsableSkillActor::HandleInteractionAborted(APawn* InteractionInstigator) {
}

void AUsableSkillActor::HandleAbilityReset(UAbilityBase* OwnedAbility, const FGameplayTag& AbilityTag) {
}

void AUsableSkillActor::ActivateSkill_Implementation(USkill* InSkill) {
}


