#include "StrategyPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AStrategyPlayerState::AStrategyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartedFromLobby = true;
    this->bPlayerReady = false;
    this->LoadoutPreviewHero = NULL;
    this->WorkbenchActor = NULL;
    this->WorkbenchPreviewWeapon = NULL;
    this->GarageActor = NULL;
    this->PowerUse = 0.00f;
    this->PowerBuff = NULL;
    this->WeaponBuff = NULL;
    this->PremadeCharacters = NULL;
    this->SuitModules = NULL;
    this->CustomBotTable = NULL;
    this->LastEquipStatus = NULL;
    this->ValidationObject = NULL;
}


bool AStrategyPlayerState::WeaponDataWeaponClassIsDefaultForCurrentPowerSuit(TSoftClassPtr<ASolsticeWeaponBase> InWeaponSoftClass) {
    return false;
}

bool AStrategyPlayerState::ValidateClassLimit(const FCharacterData& NewData) {
    return false;
}

void AStrategyPlayerState::UpdateModuleSelection() {
}

void AStrategyPlayerState::StaticBroadcastModulesChanged() {
}

void AStrategyPlayerState::SetWorkbenchPreviewWeapon(ASolsticeWeaponBase* NewPreviewWeapon) {
}

void AStrategyPlayerState::SetViewContext(AStrategyPlayerState* NewViewContext) {
}

void AStrategyPlayerState::SetupPremade(const FCharacterData& InData) {
}

void AStrategyPlayerState::SetupLoadoutHero() {
}

void AStrategyPlayerState::SetupCharacterUI() {
}

void AStrategyPlayerState::SetSkill_Implementation(ESkillSlot InSkillSlot, int32 InSlotIndex, TSubclassOf<USkill> InSkillClass) {
}
bool AStrategyPlayerState::SetSkill_Validate(ESkillSlot InSkillSlot, int32 InSlotIndex, TSubclassOf<USkill> InSkillClass) {
    return true;
}

void AStrategyPlayerState::SetPlayerReady(bool NewReady) {
}

void AStrategyPlayerState::SetDesiredSuitColor(FLinearColor InColor, bool bPrimaryColor) {
}

void AStrategyPlayerState::SetDefaultColorForClass() {
}

void AStrategyPlayerState::SetCustomSkin(FGameplayTag InSkinTag, bool bUseDefaultColors) {
}

void AStrategyPlayerState::ServerSetVehicleData_Implementation(const FSolsticeDeployedVehicleData& NewVehicleData) {
}

void AStrategyPlayerState::ServerSetPlayerReady_Implementation(bool NewReady) {
}
bool AStrategyPlayerState::ServerSetPlayerReady_Validate(bool NewReady) {
    return true;
}

void AStrategyPlayerState::ServerSetPlayerName_Implementation(const FString& NewName) {
}

void AStrategyPlayerState::ServerSetPlayerCurrentView_Implementation(FGameplayTag ViewTag) {
}

void AStrategyPlayerState::ServerSetCustomVisualDefinition_Implementation(const FCustomVisualDefinition& NewVisual) {
}

void AStrategyPlayerState::ServerSetCharacterData_Implementation(const FCharacterData& NewData) {
}

void AStrategyPlayerState::ServerModifyVehicle_Implementation(const FSolsticeDeployedVehicleData& NewVehicleData) {
}

void AStrategyPlayerState::ServerAdjustWeapon_Implementation(ASolsticeWeaponBase* Weapon, const FCharacterWeaponData& WeaponData) {
}

FCharacterData AStrategyPlayerState::SavePlayerData() {
    return FCharacterData{};
}

void AStrategyPlayerState::SaveMarineSetup(ESolsticeHeroClass InClass, int32 InSlot, const FString& InName) {
}

void AStrategyPlayerState::SaveClassPremade() {
}

void AStrategyPlayerState::SaveBotSetup() {
}

void AStrategyPlayerState::SaveBotPremade() {
}

void AStrategyPlayerState::RemoveModule_Implementation(const FReplicatedModule& OldModule) {
}
bool AStrategyPlayerState::RemoveModule_Validate(const FReplicatedModule& OldModule) {
    return true;
}

void AStrategyPlayerState::RemoveGear_Implementation(const FCharacterEquipment& OldGear) {
}
bool AStrategyPlayerState::RemoveGear_Validate(const FCharacterEquipment& OldGear) {
    return true;
}

bool AStrategyPlayerState::PlayerCanLoadPremadeLoadout(const FSavedCharacterData& SavedLoadout) {
    return false;
}

void AStrategyPlayerState::OnRep_VehicleData(const FSolsticeDeployedVehicleData& OldVehicleData) {
}

void AStrategyPlayerState::OnRep_PlayerStart() {
}

void AStrategyPlayerState::OnRep_PlayerReady() {
}

void AStrategyPlayerState::OnRep_PlayerCurrentView() {
}

void AStrategyPlayerState::OnRep_CustomVisual(const FCustomVisualDefinition& OldVisual) {
}

void AStrategyPlayerState::OnLocalPlayerChangedViews(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView) {
}

FSavedCharacterData AStrategyPlayerState::MakeSavedCharacterData(const FString& SetupName, int32 Slot) {
    return FSavedCharacterData{};
}

FCharacterData AStrategyPlayerState::MakeCharacterData() const {
    return FCharacterData{};
}

void AStrategyPlayerState::LoadNetworkPremade(const FSavedCharacterData& InData) {
}

void AStrategyPlayerState::LoadMarineSetup(ESolsticeHeroClass InClass, int32 InSlot) {
}

void AStrategyPlayerState::LoadClassPremade() {
}

void AStrategyPlayerState::LoadBotPremade() {
}

bool AStrategyPlayerState::IsSaveSlotFree(ESolsticeHeroClass InClass, int32 InSlot) const {
    return false;
}

bool AStrategyPlayerState::IsAllowedToHotJoin() {
    return false;
}


void AStrategyPlayerState::HandleAttributeValueChanged(EAttribute InAttribute, float OldValue, float NewValue) {
}

FCharacterWeaponData AStrategyPlayerState::GetSecondaryWeaponData() {
    return FCharacterWeaponData{};
}

TArray<FString> AStrategyPlayerState::GetSaveNamesForClass(ESolsticeHeroClass InClass) const {
    return TArray<FString>();
}

FString AStrategyPlayerState::GetSaveNameFor(ESolsticeHeroClass InClass, int32 InSlot) const {
    return TEXT("");
}

TArray<FSavedCharacterWeaponData> AStrategyPlayerState::GetSavedWeaponVariations(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const {
    return TArray<FSavedCharacterWeaponData>();
}

FCharacterWeaponData AStrategyPlayerState::GetPrimaryWeaponData() {
    return FCharacterWeaponData{};
}

FPowerSuitModel AStrategyPlayerState::GetPowerSuitModel() const {
    return FPowerSuitModel{};
}

FGameplayTag AStrategyPlayerState::GetPlayerCurrentView() const {
    return FGameplayTag{};
}

AStrategyControllerBase* AStrategyPlayerState::GetPlayerController() const {
    return NULL;
}

int32 AStrategyPlayerState::GetNumberOfFreeModuleSlots(ESuitSection SuitSection) {
    return 0;
}

float AStrategyPlayerState::GetMaxPower() const {
    return 0.0f;
}

ESolsticeHeroClass AStrategyPlayerState::GetMarineClass() const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

UModuleEquipStatus* AStrategyPlayerState::GetLastEquipStatus() const {
    return NULL;
}

int32 AStrategyPlayerState::GetInventoryItemEquipCount(FGameplayTag ItemTag) const {
    return 0;
}

int32 AStrategyPlayerState::GetEquippedMedalSizeByName(const FName& ModuleName) {
    return 0;
}

TArray<FSavedModule> AStrategyPlayerState::GetEquippedInventoryModules() const {
    return TArray<FSavedModule>();
}

TSubclassOf<ASecondaryWeaponBase> AStrategyPlayerState::GetDefaultSecondaryWeaponFor(FPowerSuitModel InPowerSuitModel) const {
    return NULL;
}

TSubclassOf<APrimaryWeaponBase> AStrategyPlayerState::GetDefaultPrimaryWeaponFor(FPowerSuitModel InPowerSuitModel) const {
    return NULL;
}

TArray<FSavedModule> AStrategyPlayerState::GetDefaultLoadoutFor(FPowerSuitModel InPowerSuitModel) const {
    return TArray<FSavedModule>();
}

ESolsticeHeroClass AStrategyPlayerState::GetDefaultHeroClass() const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

void AStrategyPlayerState::EmptyModules() {
}

void AStrategyPlayerState::DeleteMarineSetup(ESolsticeHeroClass InClass, int32 InSlot) {
}

void AStrategyPlayerState::ClientOverClassLimits_Implementation(ESolsticeHeroClass UnavailableClass) {
}

void AStrategyPlayerState::ChangeHero_Implementation(const FCharacterData& NewData, bool FirstSetup) {
}

void AStrategyPlayerState::AddModule_Implementation(const FReplicatedModule& NewModule) {
}
bool AStrategyPlayerState::AddModule_Validate(const FReplicatedModule& NewModule) {
    return true;
}

void AStrategyPlayerState::AddGear_Implementation(const FCharacterEquipment& NewGear) {
}
bool AStrategyPlayerState::AddGear_Validate(const FCharacterEquipment& NewGear) {
    return true;
}

void AStrategyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyPlayerState, bPlayerReady);
    DOREPLIFETIME(AStrategyPlayerState, CameraActor);
    DOREPLIFETIME(AStrategyPlayerState, PlayerStart);
    DOREPLIFETIME(AStrategyPlayerState, CustomVisual);
    DOREPLIFETIME(AStrategyPlayerState, ReplicatedModules);
    DOREPLIFETIME(AStrategyPlayerState, VehicleData);
    DOREPLIFETIME(AStrategyPlayerState, ReplicatedGear);
    DOREPLIFETIME(AStrategyPlayerState, PlayerCurrentView);
}


