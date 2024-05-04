#include "EnvIntResponseHeroHeldObject.h"

UEnvIntResponseHeroHeldObject::UEnvIntResponseHeroHeldObject() {
    this->ItemTypeClass = NULL;
    this->PickupAnimation = NULL;
    this->ActiveInteractableComponent = NULL;
    this->AsItemInstance = NULL;
}

void UEnvIntResponseHeroHeldObject::HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InUpdatedTag) {
}

void UEnvIntResponseHeroHeldObject::HandleMontageEnded(UAnimMontage* InMontage, bool InInterrupted) {
}

void UEnvIntResponseHeroHeldObject::HandleAnimationNotifyHit(FName InNotifyName, const FBranchingPointNotifyPayload& InBranchingPointPayload) {
}

void UEnvIntResponseHeroHeldObject::HandleActorKilled(AActor* InKilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void UEnvIntResponseHeroHeldObject::FailsafeTriggered() {
}


