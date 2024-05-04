#include "MissionSetupActor.h"
#include "PrefabManagerComponent.h"
#include "LogisticsComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpawnGeneratorComponent.h"

AMissionSetupActor::AMissionSetupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(1);
    this->CustomVehicleCap = 2;
    this->SpawnGeneratorComponent = CreateDefaultSubobject<USpawnGeneratorComponent>(TEXT("SpawnGeneratorComponent"));
    this->CombatReportComponentClass = NULL;
    this->CombatReportComponent = NULL;
    this->LogisticsComponent = CreateDefaultSubobject<ULogisticsComponent>(TEXT("LogisticsComponent"));
    this->PrefabManager = CreateDefaultSubobject<UPrefabManagerComponent>(TEXT("PrefabManager"));
    this->MissionGenerationSeed = -1;
    this->bFinalized = false;
    this->BaseMissionDeploymentCost = 3;
    this->TotalMissionDeploymentCost = 3;
    this->InfestationLevel = -1;
    this->IntelLevel = -1;
    this->MissionXPModifier = 1.00f;
    this->bDifficultySettingsAdjusted = false;
    this->DefaultSecondaryMissionFrequency = ESecondaryMissionFrequency::Normal;
    this->SecondaryMissionFrequency = ESecondaryMissionFrequency::Normal;
    this->DefaultAirSupportLevel = EAirSupportLevel::None;
    this->AirSupportLevel = EAirSupportLevel::None;
    this->DefaultHordeArrivalTime = EHordeArrivalTime::Standard;
    this->HordeArrivalTime = EHordeArrivalTime::Standard;
    this->DefaultArtillerySupportLevel = EArtillerySupportLevel::None;
    this->ArtillerySupportLevel = EArtillerySupportLevel::None;
    this->GameType = EStrategyMissionGameType::Invalid;
    this->SkirmishGenerationType = ESkirmishGenerationType::Random;
    this->GameDifficulty = EDifficulty::Soldier;
    this->MissionLocationsTable = NULL;
    this->SkirmishMissionTable = NULL;
    this->CampaignMissionTable = NULL;
    this->StrategyMissionTable = NULL;
    this->PrefabData = NULL;
    this->AllMissionDescriptions = NULL;
    this->StormSeverity = EStormSeverity::None;
}

void AMissionSetupActor::UpdateSessionNameFromSetupActor() {
}

void AMissionSetupActor::UpdateRegionInfo(ARegion* Region) {
}

void AMissionSetupActor::SpawnCombatReportComponent(AStrategyMission* InMission) {
}

void AMissionSetupActor::SetStormSeverity(EStormSeverity NewSeverity) {
}

void AMissionSetupActor::SetSkirmishGenerationType(ESkirmishGenerationType InGenerationType) {
}

void AMissionSetupActor::SetSecondaryMissionFrequency(ESecondaryMissionFrequency InFrequency) {
}

void AMissionSetupActor::SetMissionGenerationData(const FMissionGenerationData& InData) {
}

void AMissionSetupActor::SetMissionData(const FStrategyMissionData& InData, const FGameplayTag& SelectedMissionTag) {
}

void AMissionSetupActor::SetInfestationLevel(int32 NewInfestationLevel) {
}

void AMissionSetupActor::SetHordeArrivalTime(EHordeArrivalTime InArrivalTime) {
}

void AMissionSetupActor::SetGameDifficulty(EDifficulty InDifficulty) {
}

void AMissionSetupActor::SetFirstPrimaryMission(FGameplayTag SelectedPrimaryMissionTag) {
}

void AMissionSetupActor::SetDefaultSecondaryMissionFrequency(ESecondaryMissionFrequency InValue) {
}

void AMissionSetupActor::SetDefaultHordeArrivalTime(EHordeArrivalTime InValue) {
}

void AMissionSetupActor::SetDefaultArtillerySupportLevel(EArtillerySupportLevel InValue) {
}

void AMissionSetupActor::SetDefaultAirSupportLevel(EAirSupportLevel InValue) {
}

void AMissionSetupActor::SetCustomVehicleCap(int32 CustomCap) {
}

void AMissionSetupActor::SetBotCount(int32 BotCount) {
}

void AMissionSetupActor::SetArtillerySupportLevel(EArtillerySupportLevel InSupportLevel) {
}

void AMissionSetupActor::SetAirSupportLevel(EAirSupportLevel InSupportLevel) {
}

void AMissionSetupActor::OnRep_SkirmishGenerationType() {
}

void AMissionSetupActor::OnRep_SecondaryMissionFrequency(ESecondaryMissionFrequency OldValue) {
}

void AMissionSetupActor::OnRep_MissionGenerationData(const FMissionGenerationData& OldData) {
}

void AMissionSetupActor::OnRep_Mission() {
}

void AMissionSetupActor::OnRep_InfestationLevel(int32 OldValue) {
}

void AMissionSetupActor::OnRep_HordeArrivalTime(EHordeArrivalTime OldValue) {
}

void AMissionSetupActor::OnRep_GameDifficulty(EDifficulty OldValue) {
}

void AMissionSetupActor::OnRep_DeployedVehicles(const TArray<FSolsticeDeployedVehicle>& OldVehicleArray) {
}

void AMissionSetupActor::OnRep_ArtillerySupportLevel(EArtillerySupportLevel OldValue) {
}

void AMissionSetupActor::OnRep_AirSupportLevel(EAirSupportLevel OldValue) {
}

void AMissionSetupActor::LoadMissionSettings(const FStrategyMissionSettings& InSettings) {
}

void AMissionSetupActor::HandleFailedToSpawnPrefab(TSoftObjectPtr<UPrefabricatorAsset> FailedPrefab) {
}

int32 AMissionSetupActor::GetSecondaryMissionSliderFreedomSteps_Implementation() const {
    return 0;
}

FGameplayTagContainer AMissionSetupActor::GetSecondaryMissionPool() const {
    return FGameplayTagContainer{};
}

FString AMissionSetupActor::GetRegionName() const {
    return TEXT("");
}

ARegion* AMissionSetupActor::GetRegion() const {
    return NULL;
}

int32 AMissionSetupActor::GetNumberOfDeployedVehiclesByTag(FGameplayTag VehicleTag) {
    return 0;
}

float AMissionSetupActor::GetMissionXPModifier() {
    return 0.0f;
}

FName AMissionSetupActor::GetMissionLevelName() const {
    return NAME_None;
}

int32 AMissionSetupActor::GetMissionIntelLevel() const {
    return 0;
}

FText AMissionSetupActor::GetMissionDisplayName() const {
    return FText::GetEmpty();
}

FText AMissionSetupActor::GetMissionDisplayDescription() const {
    return FText::GetEmpty();
}

AStrategyMission* AMissionSetupActor::GetMission() const {
    return NULL;
}

int32 AMissionSetupActor::GetMaximumDeployedVehicles() const {
    return 0;
}

USolsticeSession_HostSessionRequest* AMissionSetupActor::GetHostingRequest() const {
    return NULL;
}

int32 AMissionSetupActor::GetHordeArrivalSliderFreedomSteps_Implementation() const {
    return 0;
}

EDifficulty AMissionSetupActor::GetGameDifficulty() const {
    return EDifficulty::None;
}

float AMissionSetupActor::GetExperienceModifier() const {
    return 0.0f;
}

float AMissionSetupActor::GetEndingHQ_HitPoints() const {
    return 0.0f;
}

int32 AMissionSetupActor::GetEffectiveVehicleCap() const {
    return 0;
}

TArray<FStrategyMissionData> AMissionSetupActor::GetCombatLevelData() {
    return TArray<FStrategyMissionData>();
}

TArray<FCombatLayerMissionSpawnParameters> AMissionSetupActor::GetBonusSecondaryMissions() const {
    return TArray<FCombatLayerMissionSpawnParameters>();
}

FGameplayTagContainer AMissionSetupActor::GetAvailableStrategyCombatMissions() const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer AMissionSetupActor::GetAvailableStartingPrimaryMissions() const {
    return FGameplayTagContainer{};
}

TArray<EDifficulty> AMissionSetupActor::GetAvailableGameDifficulties() const {
    return TArray<EDifficulty>();
}

TArray<FString> AMissionSetupActor::GetAvailableCombatLevels() const {
    return TArray<FString>();
}

int32 AMissionSetupActor::GetArtillerySupportSliderFreedomSteps_Implementation() const {
    return 0;
}

int32 AMissionSetupActor::GetAirSupportSliderFreedomSteps_Implementation() const {
    return 0;
}

void AMissionSetupActor::GenerateWaveData() {
}

bool AMissionSetupActor::CanDeployToMission() const {
    return false;
}

void AMissionSetupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionSetupActor, DeployedVehicles);
    DOREPLIFETIME(AMissionSetupActor, CustomVehicleCap);
    DOREPLIFETIME(AMissionSetupActor, Mission);
    DOREPLIFETIME(AMissionSetupActor, MissionGenerationData);
    DOREPLIFETIME(AMissionSetupActor, InfestationLevel);
    DOREPLIFETIME(AMissionSetupActor, IntelLevel);
    DOREPLIFETIME(AMissionSetupActor, SecondaryMissionFrequency);
    DOREPLIFETIME(AMissionSetupActor, AirSupportLevel);
    DOREPLIFETIME(AMissionSetupActor, HordeArrivalTime);
    DOREPLIFETIME(AMissionSetupActor, ArtillerySupportLevel);
    DOREPLIFETIME(AMissionSetupActor, SkirmishGenerationType);
    DOREPLIFETIME(AMissionSetupActor, GameDifficulty);
    DOREPLIFETIME(AMissionSetupActor, StormSeverity);
}


