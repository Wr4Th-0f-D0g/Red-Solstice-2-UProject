#include "WindowBase.h"
#include "Net/UnrealNetwork.h"

AWindowBase::AWindowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->WIndowState = EWindowState::Open;
    this->DefaultWindowState = EWindowState::Open;
    this->ClosedChance = 0.50f;
    this->bWindowClosedFromRandom = true;
    this->InteractableComponent = NULL;
}


void AWindowBase::SetWindowState(EWindowState NewState, bool bDuringWindowInit) {
}


void AWindowBase::OnRep_WindowState(EWindowState PrevState) {
}

void AWindowBase::HandleInteractionStarted(APawn* PawnInstigator) {
}

void AWindowBase::HandleInteractionComponentReset() {
}

void AWindowBase::HandleInteractionCompleted_Implementation(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void AWindowBase::HandleInteractionAborted(APawn* PawnInstigator) {
}


void AWindowBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWindowBase, WIndowState);
    DOREPLIFETIME(AWindowBase, bWindowClosedFromRandom);
}


