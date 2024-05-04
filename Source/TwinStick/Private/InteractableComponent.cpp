#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionTimeRemaining = 1.00f;
    this->bShowNameAtDistance = false;
    this->ShowNameDistance = 0.00f;
    this->bInteractionEnabled = false;
    this->InteractionCountPolicy = EInteractionCount::EIC_SingleUse;
    this->InteractionSpeedMultiplier = 1.00f;
    this->bKeepProgressOnAbort = false;
    this->InteractionsRemaining = 1;
    this->InteractionTime = 1.00f;
    this->AbortPolicy = EInteractionAbortPolicy::EIAP_Range;
    this->InteractionAbortRange = 300.00f;
    this->bAlwaysAbortWhenOutOfRange = false;
    this->MaxConcurrentInstigators = 1;
    this->InteractionTimePolicy = EInteractionProgressMode::EIPM_Cooperative;
    this->InteractionResourceCost = 0;
    this->FModSoundAC = NULL;
    this->FModProgressSoundAC = NULL;
    this->BeginSound = NULL;
    this->InProgressSound = NULL;
    this->ActivatedSound = NULL;
    this->FailedSound = NULL;
    this->WidgetComp = NULL;
}

void UInteractableComponent::ToggleInteractableWidget_Implementation(bool bNewVisible) {
}

void UInteractableComponent::PulseForClosePlayer() {
}

void UInteractableComponent::PlaySound(UFMODAudioComponent* AudioComponent, UFMODEvent* SoundEvent, bool bForceStopPrevious) {
}

void UInteractableComponent::OnRep_InteractionStatus(const FInteractionStatus& OldStatus) {
}

void UInteractableComponent::OnRep_InteractionsRemaining(int32 OldValue) {
}

bool UInteractableComponent::IsInteractionEnabled() const {
    return false;
}

bool UInteractableComponent::IsActiveInstigator(const APawn* InInstigator) const {
    return false;
}





float UInteractableComponent::GetTotalInteractionTime() const {
    return 0.0f;
}

float UInteractableComponent::GetRemainingInteractionTime(APawn* InteractionInstigator) const {
    return 0.0f;
}

int32 UInteractableComponent::GetNumActiveInstigators() const {
    return 0;
}

FInteractionStatus UInteractableComponent::GetInteractionStatus() const {
    return FInteractionStatus{};
}

int32 UInteractableComponent::GetInteractionResourceCost() const {
    return 0;
}

float UInteractableComponent::GetInteractionProgress(APawn* InteractionInstigator) const {
    return 0.0f;
}

FVector UInteractableComponent::GetInteractionLocation() const {
    return FVector{};
}

float UInteractableComponent::GetElapsedInteractionTime(APawn* InteractionInstigator) const {
    return 0.0f;
}

TArray<APawn*> UInteractableComponent::GetActiveInstigators() const {
    return TArray<APawn*>();
}

void UInteractableComponent::DoReset() {
}

void UInteractableComponent::DoInteract(APawn* Instigator) {
}

void UInteractableComponent::DoComplete(bool bSuccess) {
}

void UInteractableComponent::DoAbort(APawn* Instigator) {
}

bool UInteractableComponent::CanInteract(APawn* Instigator) const {
    return false;
}

bool UInteractableComponent::CanAbort(APawn* Instigator) const {
    return false;
}

void UInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractableComponent, InteractionTimeRemaining);
    DOREPLIFETIME(UInteractableComponent, InteractionStatus);
    DOREPLIFETIME(UInteractableComponent, bInteractionEnabled);
    DOREPLIFETIME(UInteractableComponent, InteractionsRemaining);
    DOREPLIFETIME(UInteractableComponent, ActiveInstigators);
}


