#include "DoorBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ADoorBase::ADoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->bAlwaysAttackDoors = true;
    this->ProximityOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("OpenArea"));
    this->HunterAttachPointLeft = CreateDefaultSubobject<UArrowComponent>(TEXT("HunterAttachPointLeft"));
    this->HunterAttachPointRight = CreateDefaultSubobject<UArrowComponent>(TEXT("HunterAttachPointRight"));
    this->DoorNavBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorNavBox"));
    this->NavModifierComponent = NULL;
    this->DoorWidth = 0.00f;
    this->PassableAreaClass = NULL;
    this->ImpassableAreaClass = NULL;
    this->MonsterPathingAllowedClass = NULL;
    this->bDoorOpen = false;
    this->bResolvedLinkedObjectGUID = false;
    this->bEpicFailedMiserably = true;
    this->DoorState = 0;
    this->bDoorInvulnerable = false;
    this->bOnlyOpenOnce = false;
    this->DeathSound = NULL;
    this->DeathParticle = NULL;
    this->SelectedMontage = NULL;
    this->bIsDebugEnabled = false;
    this->bIsDebugLineEnabled = true;
    this->bShouldFlushPersistantDebugLines = true;
    this->bIsDebugLinePersistent = true;
    this->DebugLineDuration = 0.00f;
    this->DebugLineDepthPriority = 2;
    this->DebugLineThickness = 10.00f;
    this->bWakeMonsters = false;
    this->MarineDamagePerKick = 130.00f;
    this->RifleKickDoor = NULL;
    this->PistolKickDoor = NULL;
    this->BatonKickDoor = NULL;
    this->ProximityOverlap->SetupAttachment(RootComponent);
    this->HunterAttachPointLeft->SetupAttachment(RootComponent);
    this->HunterAttachPointRight->SetupAttachment(RootComponent);
    this->DoorNavBox->SetupAttachment(RootComponent);
}


void ADoorBase::Repair(APawn* RepairInstigator) {
}

void ADoorBase::RemoveDoorState(ESolsticeDoorState RemovedState) {
}

void ADoorBase::PopulateWorldInteractionLocations() {
}

void ADoorBase::OnRep_DoorState(uint8 OldState) {
}

bool ADoorBase::IsPowered() const {
    return false;
}

bool ADoorBase::IsPassable() const {
    return false;
}

bool ADoorBase::IsHacked() const {
    return false;
}

bool ADoorBase::IsDisabled() const {
    return false;
}

bool ADoorBase::IsDestroyed() const {
    return false;
}

bool ADoorBase::IsBlocked() const {
    return false;
}

bool ADoorBase::IsAutomatic() const {
    return false;
}


bool ADoorBase::HasState(ESolsticeDoorState InState) const {
    return false;
}

bool ADoorBase::HasHunterAttached() const {
    return false;
}

void ADoorBase::HandlePawnLeftArea() {
}

void ADoorBase::HandlePawnEnteredArea() {
}

void ADoorBase::HandleInteractionActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ADoorBase::HandleInstigatorWeaponStateChanged(ASolsticeWeaponBase* ActiveWeapon, EFiringState OldState, EFiringState NewState) {
}

TSubclassOf<UNavArea> ADoorBase::GetNavAreaClass() const {
    return NULL;
}

TArray<APowerConsumer*> ADoorBase::GetLinkedTerminals() const {
    return TArray<APowerConsumer*>();
}

void ADoorBase::FortifyDoor(float HitPointsHealed) {
}




bool ADoorBase::DoorIsHostileTo(TScriptInterface<IGenericTeamAgentInterface> Actor) {
    return false;
}








void ADoorBase::DisableDoor_Implementation() {
}

bool ADoorBase::CanOpenAutomatically() const {
    return false;
}

bool ADoorBase::CanOpen() const {
    return false;
}

bool ADoorBase::CanClose() const {
    return false;
}

bool ADoorBase::CanBePowered() const {
    return false;
}

bool ADoorBase::CanBeHacked() const {
    return false;
}

bool ADoorBase::CanBeDisabled() const {
    return false;
}

bool ADoorBase::CanBeDestroyed() const {
    return false;
}

bool ADoorBase::CanBeBlocked() const {
    return false;
}

void ADoorBase::AddDoorState(ESolsticeDoorState AddedState) {
}

void ADoorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorBase, bEpicFailedMiserably);
    DOREPLIFETIME(ADoorBase, DoorState);
}


