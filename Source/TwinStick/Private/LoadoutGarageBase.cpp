#include "LoadoutGarageBase.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"

ALoadoutGarageBase::ALoadoutGarageBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->DefaultVehicleTable = NULL;
    this->VehicleModuleTable = NULL;
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
    this->SceneCaptureSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SceneCaptureSpringArm"));
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    this->PreviewVehicle = NULL;
    this->RotationStallTimer = 0.00f;
    this->StallRotationSpeed = 10.00f;
    this->SceneCaptureSpringArm->SetupAttachment(RootComponent);
    this->SceneCaptureComponent->SetupAttachment(SceneCaptureSpringArm);
}

bool ALoadoutGarageBase::VehicleModIsUnlocked(FGameplayTag VehicleModTag) const {
    return false;
}

bool ALoadoutGarageBase::VehicleIsEquippedByTagForPlayer(const FGameplayTag& VehicleTag, AStrategyPlayerState* PlayerState) {
    return false;
}

bool ALoadoutGarageBase::VehicleIsDeployedByTagForPlayer(const FGameplayTag& VehicleTag, AStrategyPlayerState* PlayerState) {
    return false;
}

bool ALoadoutGarageBase::VehicleIsDeployedByTag(FGameplayTag VehicleTag) const {
    return false;
}

void ALoadoutGarageBase::UnequipVehicle() {
}

void ALoadoutGarageBase::SetVehicleSkinIndex(int32 NewSkinIndex) {
}

void ALoadoutGarageBase::SetVehicleSkinColor(FLinearColor NewColor, bool bForPrimary) {
}

void ALoadoutGarageBase::SelectVehicleByTagForDisplay(FGameplayTag VehicleTag, bool ForceReset) {
}

void ALoadoutGarageBase::SaveVehiclePresetToSlot(int32 Slot, const FString& NewSaveName) {
}

void ALoadoutGarageBase::RemoveVehicleModule(FGameplayTag ModuleTag, FGameplayTag AddedModuleTag, bool bAddDefaultModule) {
}

bool ALoadoutGarageBase::PlayerHasVehicle(AStrategyPlayerState* PlayerState) const {
    return false;
}

bool ALoadoutGarageBase::PlayerHasDeployedVehicle(AStrategyPlayerState* PlayerState) {
    return false;
}

void ALoadoutGarageBase::LoadVehiclePresetFromSlot(FSavedSolsticeModifiedVehicleData SavedData) {
}

bool ALoadoutGarageBase::IsModEquippedByTag(const FGameplayTag& ModTag) const {
    return false;
}

bool ALoadoutGarageBase::HasVehicleModuleOfCategory(ESolsticeVehicleModuleCategory InCategory, FGameplayTag& OutModuleTag) {
    return false;
}

bool ALoadoutGarageBase::HasSaveInSlotForVehicle(FGameplayTag VehicleTag, int32 Slot) const {
    return false;
}

void ALoadoutGarageBase::HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView) {
}

TArray<FGameplayTag> ALoadoutGarageBase::GetVehiclesAvailableForUse(const UObject* WorldContext) {
    return TArray<FGameplayTag>();
}

FSavedSolsticeModifiedVehicleData ALoadoutGarageBase::GetSavedVehicleDataForSlotAndTag(FGameplayTag VehicleTag, int32 Slot) const {
    return FSavedSolsticeModifiedVehicleData{};
}

TArray<FSavedSolsticeModifiedVehicleData> ALoadoutGarageBase::GetSaveDataForVehicleTag(FGameplayTag VehicleTag) const {
    return TArray<FSavedSolsticeModifiedVehicleData>();
}

FSolsticeVehicleData ALoadoutGarageBase::GetPlayerEquippedVehicleData(AStrategyPlayerState* PlayerState) const {
    return FSolsticeVehicleData{};
}

int32 ALoadoutGarageBase::GetCurrentVehicleSkinIndex() const {
    return 0;
}

FLinearColor ALoadoutGarageBase::GetCurrentVehicleColor(bool bPrimary) const {
    return FLinearColor{};
}

void ALoadoutGarageBase::EquipVehicleMod(const FGameplayTag& ModTagForEquip) {
}

void ALoadoutGarageBase::EquipVehicle() {
}

void ALoadoutGarageBase::DeleteVehicleFromSlot(FGameplayTag VehicleTag, int32 Slot) {
}

bool ALoadoutGarageBase::CurrentViewContextVehicleIsDeployed() const {
    return false;
}

bool ALoadoutGarageBase::CurrentDisplayVehicleMatchesEquippedVehicle() const {
    return false;
}

void ALoadoutGarageBase::AddVehicleModule(FGameplayTag ModuleTag) {
}


