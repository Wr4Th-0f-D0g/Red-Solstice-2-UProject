#include "StrategyControllerBase.h"

AStrategyControllerBase::AStrategyControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AStrategyControllerBase::SwapWeapons() {
}

void AStrategyControllerBase::ServerSwapWeapons_Implementation() {
}

void AStrategyControllerBase::ServerSaveWeaponTemplate_Implementation(const FCharacterWeaponData& SlotData, const FString& SlotName) {
}

void AStrategyControllerBase::ServerSaveVehicleTemplate_Implementation(const FSavedSolsticeModifiedVehicleData& VehicleData, int32 SaveIndex) {
}

void AStrategyControllerBase::ServerSaveLoadout_Implementation(const FSavedCharacterData& NewLoadout, int32 Slot) {
}

void AStrategyControllerBase::ServerRequestSavedLoadouts_Implementation(ESolsticeHeroClass MarineClass) {
}

void AStrategyControllerBase::ServerDeleteWeaponTemplate_Implementation(const FCharacterWeaponData& SlotData, const FString& SlotName) {
}

void AStrategyControllerBase::ServerDeleteVehicleTemplate_Implementation(const FGameplayTag& VehicleTag, int32 SaveIndex) {
}

void AStrategyControllerBase::ServerDeleteLoadout_Implementation(ESolsticeHeroClass MarineClass, int32 Slot) {
}


void AStrategyControllerBase::ClientSendNetworkError_Implementation(const FGameplayTag& ErrorTag) {
}

void AStrategyControllerBase::ClientReceiveSavedLoadouts_Implementation(ESolsticeHeroClass MarineClass, const TArray<FSavedCharacterData>& ClassLoadouts) {
}

void AStrategyControllerBase::ClientForceUpdateMissionGenerationData_Implementation(const FMissionGenerationData& MissionGenerationData) {
}

void AStrategyControllerBase::CharacterSelectionChanged_Implementation(const FCharacterData& CharacterData) {
}


