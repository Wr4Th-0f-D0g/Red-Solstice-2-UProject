#include "Region.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ARegion::ARegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RegionMesh"));
    this->RegionCenter = CreateDefaultSubobject<USceneComponent>(TEXT("RegionCenter"));
    this->HQ_Location = CreateDefaultSubobject<USceneComponent>(TEXT("HQ_Location"));
    this->Outpost_Location = CreateDefaultSubobject<USceneComponent>(TEXT("Outpost_Location"));
    this->Terraformer_Location = CreateDefaultSubobject<USceneComponent>(TEXT("Terraformer_Location"));
    this->ContactStatus = ERegionContactStatus::None;
    this->InfestationLevel = 0;
    this->IntelLevel = 0;
    this->StormLevel = EStormSeverity::None;
    this->RegionOverlay = ERegionOverlay::Infestation;
    this->bShowRegionInfoWhenClicked = false;
    this->bIsPlayRegion = true;
    this->RegionLinkSplineActorClass = NULL;
    this->CompletedMissionBuffStacks = 0;
    this->FailedMissionBuffStacks = 0;
    this->CompletedMissionBuffClass = NULL;
    this->FailedMissionBuffClass = NULL;
    this->BlackOpsBuffClass = NULL;
    this->Outpost = NULL;
    this->Colony = NULL;
    this->Terraformer = NULL;
    this->ExcludeSpawnLocationsDistanceFromRegionWidget = 120.00f;
    this->RegionMesh->SetupAttachment(RootComponent);
    this->HQ_Location->SetupAttachment(RootComponent);
    this->Outpost_Location->SetupAttachment(RootComponent);
    this->Terraformer_Location->SetupAttachment(RootComponent);
}

void ARegion::ToggleStormOverlay() {
}

void ARegion::ToggleIntelOverlay() {
}

void ARegion::ToggleInfestationOverlay() {
}





void ARegion::SetRegionContactStatus(ERegionContactStatus InContactStatus) {
}

void ARegion::SetIntelLevel(int32 Value) {
}

void ARegion::SetInfestationLevel(int32 Value) {
}

void ARegion::RemoveStatusTag(const FGameplayTag& StatusTag) {
}



void ARegion::OnRep_StormTracker() {
}

void ARegion::OnRep_ReplicatedAttributes() {
}

void ARegion::OnRep_RegionStatusTags() {
}

void ARegion::OnRep_IntelLevel() {
}

void ARegion::OnRep_InfestationLevel() {
}

void ARegion::OnRep_ContactStatus() {
}

bool ARegion::IsOutpostUnderConstruction() const {
    return false;
}

bool ARegion::IsFullyInfested() const {
    return false;
}

bool ARegion::IsAnyAdjacentRegionContacted() const {
    return false;
}



bool ARegion::HasUpgradeableOutpost() const {
    return false;
}

bool ARegion::HasTerraformer() const {
    return false;
}

bool ARegion::HasRecentlyLostColony() const {
    return false;
}

bool ARegion::HasRandomRegionalColonyBuffFromOutpost() const {
    return false;
}

bool ARegion::HasRandomRegionalColonyBuffFromHQ() const {
    return false;
}

bool ARegion::HasRandomRegionalColonyBuff() const {
    return false;
}

bool ARegion::HasOutpostUnderConstruction() const {
    return false;
}

bool ARegion::HasOutpost() const {
    return false;
}

bool ARegion::HasOperationalTerraformer() const {
    return false;
}

bool ARegion::HasOperationalOutpost() const {
    return false;
}

bool ARegion::HasLostColony() const {
    return false;
}

bool ARegion::HasHQ() const {
    return false;
}

bool ARegion::HasFullyUpgradedOutpost() const {
    return false;
}

bool ARegion::HasColony() const {
    return false;
}

bool ARegion::HasAnyAdjacentContactedRegion() const {
    return false;
}

bool ARegion::HasActiveStorm() const {
    return false;
}

void ARegion::HandleRegionScanTimerFinished() {
}

void ARegion::HandleMaximumIntelLevelReached() {
}

void ARegion::GetWidgetComponentPlacement(FVector& OutLocation, FVector& OutNormal, FRotator& OutRotator) const {
}

int32 ARegion::GetUpgradeLevelFor(const FGameplayTag& InTag) const {
    return 0;
}

FVector ARegion::GetTerraformerNormal() const {
    return FVector{};
}

FVector ARegion::GetTerraformerLocation() const {
    return FVector{};
}

USceneComponent* ARegion::GetTerraformerComponent() const {
    return NULL;
}

int32 ARegion::GetSupplyIncome() const {
    return 0;
}

float ARegion::GetStormValue() const {
    return 0.0f;
}

FRegionalStormTracker ARegion::GetStormTracker() {
    return FRegionalStormTracker{};
}

EStormSeverity ARegion::GetStormLevel() const {
    return EStormSeverity::None;
}

int32 ARegion::GetStormIntensityModifier() const {
    return 0;
}

float ARegion::GetStormDissipationChance() const {
    return 0.0f;
}

int32 ARegion::GetSpecialistIncome() const {
    return 0;
}

FVector ARegion::GetRegionNormal() const {
    return FVector{};
}

FText ARegion::GetRegionDisplayName_Implementation() const {
    return FText::GetEmpty();
}

ERegionContactStatus ARegion::GetRegionContactStatus() const {
    return ERegionContactStatus::None;
}

FVector ARegion::GetRegionCenterLocation() const {
    return FVector{};
}

USceneComponent* ARegion::GetRegionCenter() const {
    return NULL;
}

FVector ARegion::GetRandomSpawnLocation() const {
    return FVector{};
}

bool ARegion::GetRandomPointInRegion(FVector& OutPosition) const {
    return false;
}

ARegion* ARegion::GetRandomAdjacentRegion() const {
    return NULL;
}

FVector ARegion::GetOutpostNormal() const {
    return FVector{};
}

FVector ARegion::GetOutpostLocation() const {
    return FVector{};
}

int32 ARegion::GetOutpostLevel() const {
    return 0;
}

int32 ARegion::GetOutpostConstructionSupplyCost() const {
    return 0;
}

int32 ARegion::GetOutpostConstructionSpecialistCost() const {
    return 0;
}

int32 ARegion::GetOutpostConstructionDeploymentCost() const {
    return 0;
}

int32 ARegion::GetOutpostConstructionBuildTimeHours() const {
    return 0;
}

USceneComponent* ARegion::GetOutpostComponent() const {
    return NULL;
}

int32 ARegion::GetModifiedSupplyIncome() const {
    return 0;
}

int32 ARegion::GetModifiedSpecialistIncome() const {
    return 0;
}

int32 ARegion::GetModifiedDeploymentIncome() const {
    return 0;
}

EArtillerySupportLevel ARegion::GetMinumumArtillerySupportLevel() const {
    return EArtillerySupportLevel::None;
}

ESecondaryMissionFrequency ARegion::GetMinimumSecondaryMissionFrequency() const {
    return ESecondaryMissionFrequency::Few;
}

float ARegion::GetMinimumIntelLevel() const {
    return 0.0f;
}

EHordeArrivalTime ARegion::GetMinimumHordeArrivalTime() const {
    return EHordeArrivalTime::Immediate;
}

ESecondaryMissionFrequency ARegion::GetMaximumSecondaryMissionFrequence() const {
    return ESecondaryMissionFrequency::Few;
}

EHordeArrivalTime ARegion::GetMaximumHordeArrivalTime() const {
    return EHordeArrivalTime::Immediate;
}

EArtillerySupportLevel ARegion::GetMaximumArtillerySupportLevel() const {
    return EArtillerySupportLevel::None;
}

float ARegion::GetIntelValue() const {
    return 0.0f;
}

FRegionalIntelTracker ARegion::GetIntelTracker() {
    return FRegionalIntelTracker{};
}

int32 ARegion::GetIntelLevel() const {
    return 0;
}

float ARegion::GetInfestationValue() const {
    return 0.0f;
}

FRegionalInfestationTracker ARegion::GetInfestationTracker() {
    return FRegionalInfestationTracker{};
}

int32 ARegion::GetInfestationLevel() const {
    return 0;
}

FVector ARegion::GetHQ_Normal() const {
    return FVector{};
}

FVector ARegion::GetHQ_Location() const {
    return FVector{};
}

USceneComponent* ARegion::GetHQ_Component() const {
    return NULL;
}

int32 ARegion::GetDeploymentIncome() const {
    return 0;
}

int32 ARegion::GetDeploymentCostModifier() const {
    return 0;
}

int32 ARegion::GetBaseSupplyIncome() const {
    return 0;
}

int32 ARegion::GetBaseSpecialistIncome() const {
    return 0;
}

int32 ARegion::GetBaseDeploymentIncome() const {
    return 0;
}

TArray<ARegion*> ARegion::GetAdjacentRegions(int32 SearchDepth) const {
    return TArray<ARegion*>();
}

TArray<AStrategyMission*> ARegion::GetActiveMissions() const {
    return TArray<AStrategyMission*>();
}

int32 ARegion::GetActiveMissionCount() const {
    return 0;
}

TArray<FVector> ARegion::GenerateVectorGrid() const {
    return TArray<FVector>();
}

void ARegion::DestroyTerraformer(bool bFromSolar) {
}

void ARegion::DestroyOutpost(bool bFromSolar) {
}

void ARegion::DestroyColony(bool bFromSolar) {
}

void ARegion::DeployBlackOps(UBotStatus* BotStatus) {
}



bool ARegion::CanBuildOrUpgradeOutpost() const {
    return false;
}

bool ARegion::AreAnyAdjacentRegionsInfested() const {
    return false;
}

void ARegion::AddStatusTag(const FGameplayTag& StatusTag) {
}

void ARegion::AddIntel(int32 Value) {
}

void ARegion::AddInfestation(int32 Value) {
}

void ARegion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARegion, ContactStatus);
    DOREPLIFETIME(ARegion, InfestationLevel);
    DOREPLIFETIME(ARegion, IntelLevel);
    DOREPLIFETIME(ARegion, StormTracker);
    DOREPLIFETIME(ARegion, RegionScanTimer);
    DOREPLIFETIME(ARegion, RegionStatusTags);
    DOREPLIFETIME(ARegion, ReplicatedAttributes);
}


