#include "AuraBuffActor.h"
#include "Templates/SubclassOf.h"

AAuraBuffActor::AAuraBuffActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugEnabled = false;
}

AAuraBuffActor* AAuraBuffActor::SpawnAreaBuffActor(TSubclassOf<AAuraBuffActor> AuraClass, FTransform SpawnTransform, const TArray<FAuraBuffDefinition>& Buffs, UAbilityBase* OwningAbility, USceneComponent* AttachComponent, FName AttachSocketName) {
    return NULL;
}

void AAuraBuffActor::RemoveBuffs() {
}

int32 AAuraBuffActor::GetStacks() const {
    return 0;
}

int32 AAuraBuffActor::GetMaximumStacks() const {
    return 0;
}

float AAuraBuffActor::GetBuffInterval() const {
    return 0.0f;
}

float AAuraBuffActor::GetBuffDurationModifier_Implementation() const {
    return 0.0f;
}

float AAuraBuffActor::GetBuffDuration() const {
    return 0.0f;
}


void AAuraBuffActor::ApplyBuffs() {
}


