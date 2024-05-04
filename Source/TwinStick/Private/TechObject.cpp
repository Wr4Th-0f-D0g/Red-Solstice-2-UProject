#include "TechObject.h"
#include "Net/UnrealNetwork.h"

UTechObject::UTechObject() {
    this->ResearchStatus = ETechResearchStatus::Invalid;
}

void UTechObject::UnpauseResearch() {
}

void UTechObject::Unlock() {
}

void UTechObject::StartResearch() {
}

void UTechObject::PauseResearch() {
}

void UTechObject::OnRep_ReplicatedTechTag() {
}

bool UTechObject::MeetsRequirements() const {
    return false;
}

int32 UTechObject::GetTechTier() const {
    return 0;
}

int32 UTechObject::GetSupplyRequirement() const {
    return 0;
}

int32 UTechObject::GetSpecialistRequirement() const {
    return 0;
}

FGameplayTagContainer UTechObject::GetProgressRequirement() const {
    return FGameplayTagContainer{};
}

void UTechObject::FinishResearch() {
}

void UTechObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTechObject, ReplicatedTechTag);
    DOREPLIFETIME(UTechObject, ResearchStatus);
}


