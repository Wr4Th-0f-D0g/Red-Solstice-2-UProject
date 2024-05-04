#include "HoldableObjectAsItemBase.h"
#include "Net/UnrealNetwork.h"

UHoldableObjectAsItemBase::UHoldableObjectAsItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeldObject = NULL;
    this->PickupAndThrowAnimation = NULL;
    this->ThrowAnimTime = 0.00f;
    this->HoldingObjectBuff = NULL;
    this->AppliedBuff = NULL;
}

void UHoldableObjectAsItemBase::SetHeldObject(AHoldableObjectBase* InBarrel) {
}

void UHoldableObjectAsItemBase::PerformSpecificInitialAction_Implementation() {
}

bool UHoldableObjectAsItemBase::PerformSpecificHeldItemFailsafeReleaseAction_Implementation() {
    return false;
}

void UHoldableObjectAsItemBase::PerformSpecificHeldItemDropAction_Implementation() {
}

void UHoldableObjectAsItemBase::PerformSpecificCleanupActions_Implementation() {
}

void UHoldableObjectAsItemBase::PerformSpecificActivationAction_Implementation(FVector InTargetLocation) {
}

void UHoldableObjectAsItemBase::OnRep_HeldObject() {
}

void UHoldableObjectAsItemBase::HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InUpdatedTag) {
}

void UHoldableObjectAsItemBase::HandleMontageEnded(UAnimMontage* InMontage, bool InInterrupted) {
}

void UHoldableObjectAsItemBase::HandleInteractionCompleted(AActor* InInteractableActor, const TArray<APawn*>& InInstigators, bool bInSuccess) {
}

void UHoldableObjectAsItemBase::HandleAnimationNotifyHit(FName InNotifyName, const FBranchingPointNotifyPayload& InBranchingPointPayload) {
}

void UHoldableObjectAsItemBase::HandleActorKilled(AActor* InKilledActor, const FDamage& DamageInfo, bool bRecentlyDead) {
}

void UHoldableObjectAsItemBase::DestroyMe() {
}

void UHoldableObjectAsItemBase::ClientFailsafeCalled_Implementation() {
}
bool UHoldableObjectAsItemBase::ClientFailsafeCalled_Validate() {
    return true;
}

void UHoldableObjectAsItemBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHoldableObjectAsItemBase, HeldObject);
}


