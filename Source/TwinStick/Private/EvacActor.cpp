#include "EvacActor.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "SolsticeWidgetComponent.h"

AEvacActor::AEvacActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EvacBoxComponent"));
    this->EvacBoxComponent = (UBoxComponent*)RootComponent;
    this->EvacuateWidget = CreateDefaultSubobject<USolsticeWidgetComponent>(TEXT("EvacuateWidget"));
    this->ArriveWidget = CreateDefaultSubobject<USolsticeWidgetComponent>(TEXT("ArriveWidget"));
    this->EvacAllowedTypes = 0;
    this->EvacStatus = EEvacStatus::Arriving;
    this->EvacLeavingTime = 0.00f;
    this->EvacReadyTime = 0.00f;
    this->EvacDestroyTimeAfterLeaving = 1.00f;
    this->ReplicatedEvacReadyTime = 0.00f;
    this->ReplicatedEvacLeavingTime = 0.00f;
    this->EvacuateWidget->SetupAttachment(RootComponent);
    this->ArriveWidget->SetupAttachment(RootComponent);
}

void AEvacActor::PulseOverlap() {
}

void AEvacActor::OnRep_EvacStatus() {
}









bool AEvacActor::IsStrategyBotEvacAllowed() const {
    return false;
}

bool AEvacActor::IsPlayerEvacAllowed() const {
    return false;
}

bool AEvacActor::IsMissionMarineEvacAllowed() const {
    return false;
}

bool AEvacActor::IsEveryoneEvacAllowed() const {
    return false;
}

bool AEvacActor::IsEvacAllowedFor(int32 InEvacAllowedType, EEvacAllowedTypes InType) {
    return false;
}

bool AEvacActor::IsCivilianEvacAllowed() const {
    return false;
}






void AEvacActor::DestroyMe() {
}

bool AEvacActor::CanCharacterEvacuate(ASolsticeCharacterBase* Evacuatee) const {
    return false;
}

void AEvacActor::AddFriendlyToQueue(ASolsticeCharacterBase* Friendly) {
}

void AEvacActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEvacActor, EvacStatus);
    DOREPLIFETIME(AEvacActor, ReplicatedEvacReadyTime);
    DOREPLIFETIME(AEvacActor, ReplicatedEvacLeavingTime);
}


