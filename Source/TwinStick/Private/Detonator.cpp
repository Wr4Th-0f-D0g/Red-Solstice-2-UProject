#include "Detonator.h"
#include "Net/UnrealNetwork.h"

UDetonator::UDetonator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerAsPawn = NULL;
    this->OwnerInputComponent = NULL;
    this->SelectedExplosiveIndex = 0;
    this->bDetonatorEnabled = false;
    this->bPreviewEnabled = false;
}

void UDetonator::UnregisterExplosive(AExplosiveActorBase* Explosive) {
}

void UDetonator::SelectPreviousExplosive() {
}

void UDetonator::SelectNextExplosive() {
}

void UDetonator::RegisterExplosive(AExplosiveActorBase* Explosive) {
}

void UDetonator::PreviewDetonate() {
}

void UDetonator::OnRep_DeployedExplosives() {
}

AExplosiveActorBase* UDetonator::GetSelectedExplosive(bool& bSuccess) {
    return NULL;
}

void UDetonator::EndPreviewHovered(AExplosiveActorBase* Explosive) {
}

void UDetonator::EndPreviewDetonate() {
}

void UDetonator::DetonateServer_Implementation(int32 Index) {
}

void UDetonator::Detonate() {
}

void UDetonator::BeginPreviewHovered(AExplosiveActorBase* Explosive) {
}

void UDetonator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDetonator, DeployedExplosives);
}


