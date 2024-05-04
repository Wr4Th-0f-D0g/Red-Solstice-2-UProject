#include "PowerConsumer.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"

APowerConsumer::APowerConsumer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(2);
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->MiddleOfRoom = CreateDefaultSubobject<USceneComponent>(TEXT("MiddleOfRoom"));
    this->bUpdateLinkedTerminals = true;
    this->bOverriddenNetworkManager = false;
    this->bInteractionCooldown = false;
    this->InteractionCooldownTime = 1.00f;
    this->bCooldownInteraction = false;
    this->bIsDebugEnabled = false;
    this->bIsDebugLineEnabled = true;
    this->bShouldFlushPersistantDebugLines = true;
    this->bIsDebugLinePersistent = true;
    this->DebugLineDuration = 0.00f;
    this->DebugLineDepthPriority = 2;
    this->DebugLineThickness = 10.00f;
    this->PowerRequirement = 1;
    this->PowerConsumption = 0;
    this->bRequiresSectorPower = true;
    this->bHasSectorPower = false;
    this->bLinkedObjectDestroyed = false;
    this->bIsActivated = false;
    this->bPermaDisabled = false;
    this->EnergyCost = 0.00f;
    this->bRestoreLinksAtRuntime = true;
    this->LinkedPowerRelay = NULL;
    this->LinkedPowerRelayPreEdit = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void APowerConsumer::SetPermaDisabled(bool bNewPermaDisabled) {
}

void APowerConsumer::SetLinkedObjectDestroyed(AActor* Actor, bool bInDestroyed) {
}

void APowerConsumer::SetIsActivated(bool bNewActivated, bool bFromOnRep, bool bFromLinkedTerminal) {
}

void APowerConsumer::SetHasSectorPower(bool bNewPower) {
}


void APowerConsumer::OnRep_LinkedObjectDestroyed() {
}

void APowerConsumer::OnRep_IsActivated(bool bOldValue) {
}

void APowerConsumer::OnRep_HasSectorPower() {
}

bool APowerConsumer::IsPowered() const {
    return false;
}

void APowerConsumer::DrawInteractionLocation() {
}

void APowerConsumer::ClearAllLinks() {
}



void APowerConsumer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerConsumer, bOverriddenNetworkManager);
    DOREPLIFETIME(APowerConsumer, bHasSectorPower);
    DOREPLIFETIME(APowerConsumer, bLinkedObjectDestroyed);
    DOREPLIFETIME(APowerConsumer, bIsActivated);
    DOREPLIFETIME(APowerConsumer, bPermaDisabled);
}


