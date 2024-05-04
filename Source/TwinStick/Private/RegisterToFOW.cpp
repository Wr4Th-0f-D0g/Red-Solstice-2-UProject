#include "RegisterToFOW.h"
#include "Net/UnrealNetwork.h"

URegisterToFOW::URegisterToFOW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Manager = NULL;
    this->WriteUnFog = true;
    this->WriteFow = true;
    this->WriteTerraIncog = true;
    this->bCheckActorTerraIncog = false;
    this->isActorInTerraIncog = false;
    this->SightRange = 9.00f;
    this->OldSightRange = 9.00f;
}

void URegisterToFOW::UnregisterFowActor() {
}

void URegisterToFOW::SetSightRange(float NewRange) {
}

void URegisterToFOW::SetFOW_SightRange(float NewRange) {
}

float URegisterToFOW::GetSightRange() const {
    return 0.0f;
}

void URegisterToFOW::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URegisterToFOW, SightRange);
    DOREPLIFETIME(URegisterToFOW, OldSightRange);
}


