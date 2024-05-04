#include "RTS_PlayerState.h"
#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ARTS_PlayerState::ARTS_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameState = NULL;
    this->SkirmishRequisitionEarnedThisMatch = 0;
    this->NumLoadedPrefabs = 0;
    this->bWasInactive = false;
    this->Level = 1;
    this->InventoryComponentClass = NULL;
    this->EmptyItemClass = NULL;
    this->DetonatorClass = NULL;
    this->InventorySlotCount = 5;
    this->Detonator = NULL;
    this->Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
}

void ARTS_PlayerState::SetPremadeName(FName InPremadeName) {
}

void ARTS_PlayerState::SetLevel(int32 NewLevel) {
}

void ARTS_PlayerState::SetHUD_InventoryContext() {
}

void ARTS_PlayerState::ServerSetCharacterData_Implementation(const FCharacterData& HotJoinCharacterData) {
}

void ARTS_PlayerState::ServerCallPlayerShoutForSkill_Implementation(FPlayerSkillShout SkillShoutData) {
}

void ARTS_PlayerState::SendPlayerDiedMessage(const FDamage& DeathDamage) {
}

void ARTS_PlayerState::OnRep_NumLoadedPrefabs() {
}

void ARTS_PlayerState::OnRep_Inventory() {
}

void ARTS_PlayerState::OnRep_GameState() {
}

void ARTS_PlayerState::MulticastCallPlayerShoutForSkill_Implementation(FPlayerSkillShout SkillShoutData) {
}

void ARTS_PlayerState::K2_SetHero(AHeroCharacterBase* NewHero) {
}

void ARTS_PlayerState::InitializeSlots(int32 AvailableSlots) {
}

void ARTS_PlayerState::HUD_CreateInventory() {
}

void ARTS_PlayerState::HandleInventorySlotChanged(int32 Slot, UItem* NewItem) {
}

void ARTS_PlayerState::GrantStartingStratagemItems() {
}

UInventoryComponent* ARTS_PlayerState::GetStorageInventoryComponent() const {
    return NULL;
}

void ARTS_PlayerState::DropStack(int32 SlotIndex) {
}

void ARTS_PlayerState::DropItem(int32 SlotIndex) {
}

void ARTS_PlayerState::DeactivateInventory(int32 SlotIndex) {
}

void ARTS_PlayerState::ClientConfirmedCharacterData_Implementation() {
}

void ARTS_PlayerState::ActivateInventoryByClass(TSubclassOf<UItem> ItemClass) {
}

void ARTS_PlayerState::ActivateInventory(int32 SlotIndex) {
}

void ARTS_PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARTS_PlayerState, GameState);
    DOREPLIFETIME(ARTS_PlayerState, NumLoadedPrefabs);
    DOREPLIFETIME(ARTS_PlayerState, PremadeName);
    DOREPLIFETIME(ARTS_PlayerState, bWasInactive);
    DOREPLIFETIME(ARTS_PlayerState, Level);
    DOREPLIFETIME(ARTS_PlayerState, InventorySlots);
    DOREPLIFETIME(ARTS_PlayerState, Detonator);
    DOREPLIFETIME(ARTS_PlayerState, Inventory);
}


