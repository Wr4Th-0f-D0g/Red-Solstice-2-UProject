#include "StrategyMapManager.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "StrategyInfestationManager.h"
#include "StrategyIntelManager.h"
#include "StrategyMissionManager.h"
#include "StrategyResourceManager.h"
#include "StrategyStormManager.h"
#include "StrategyViewManager.h"

AStrategyMapManager::AStrategyMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PlanetCore"));
    this->Campaign = NULL;
    this->CampaignInitializer = NULL;
    this->PlanetCore = (USceneComponent*)RootComponent;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("StrategyCamera"));
    this->CameraMode = EPlanetCameraMode::Free;
    this->ViewTarget = NULL;
    this->InfestationManager = CreateDefaultSubobject<UStrategyInfestationManager>(TEXT("InfestationManager"));
    this->MissionManager = CreateDefaultSubobject<UStrategyMissionManager>(TEXT("MissionManager"));
    this->IntelManager = CreateDefaultSubobject<UStrategyIntelManager>(TEXT("IntelManager"));
    this->StormManager = CreateDefaultSubobject<UStrategyStormManager>(TEXT("StormManager"));
    this->ViewManager = CreateDefaultSubobject<UStrategyViewManager>(TEXT("ViewManager"));
    this->ResourceManager = CreateDefaultSubobject<UStrategyResourceManager>(TEXT("ResourceManager"));
    this->SolarAttachment = CreateDefaultSubobject<USpringArmComponent>(TEXT("SolarAttachment"));
    this->ExecutorHQ = NULL;
    this->ExecutorHQ_Class = NULL;
    this->Dropship = NULL;
    this->Dropship_Class = NULL;
    this->SOLAR = NULL;
    this->SolarClass = NULL;
    this->HASROC = NULL;
    this->HasrocClass = NULL;
    this->ExecutorStartingRegionName = TEXT("Arcadia");
    this->ColonyClass = NULL;
    this->TerraformerClass = NULL;
    this->GameDifficulty = EDifficulty::None;
    this->CampaignElapsedTime = 0.00f;
    this->TimeTickSpeed = ETimeTickSpeed::Slow;
    this->KilometersPerUU = 25.00f;
    this->OutpostCount = 0;
    this->PrePauseSpeed = ETimeTickSpeed::Fast;
    this->SolarAttachment->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(SpringArm);
}

void AStrategyMapManager::UnpauseGame() {
}

void AStrategyMapManager::ToggleStormOverlay() {
}

void AStrategyMapManager::ToggleIntelOverlay() {
}

void AStrategyMapManager::ToggleInfestationOverlay() {
}


void AStrategyMapManager::SpawnTerraformers() {
}

void AStrategyMapManager::SpawnColonies() {
}

void AStrategyMapManager::SetTimeTickSpeed(ETimeTickSpeed NewSpeed) {
}

void AStrategyMapManager::RemoveStoryEvent() {
}

void AStrategyMapManager::RemoveResearchEvent() {
}

void AStrategyMapManager::RemoveOutpostEvent() {
}

void AStrategyMapManager::RemoveMissionEvent() {
}

void AStrategyMapManager::RemoveEngineeringEvent() {
}

void AStrategyMapManager::PauseGame() {
}

void AStrategyMapManager::OnRep_TimedFlags() {
}

void AStrategyMapManager::MulticastSetTimeTickSpeed_Implementation(ETimeTickSpeed NewSpeed) {
}

bool AStrategyMapManager::IsGamePaused() const {
    return false;
}

bool AStrategyMapManager::HasTechToBuildOutpost(int32 OutpostLevel) const {
    return false;
}

bool AStrategyMapManager::HasResourcesToBuildOutpost(int32 OutpostLevel) const {
    return false;
}

void AStrategyMapManager::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}

void AStrategyMapManager::HandleDropshipStatusChanged(EDropshipStatus NewStatus) {
}

void AStrategyMapManager::HandleCampaignYearChanged(const FMarsTime& CampaignTime) {
}

void AStrategyMapManager::HandleCampaignProgressTagAdded(const FGameplayTag& ProgressTag) {
}

void AStrategyMapManager::HandleCampaignMonthChanged(const FMarsTime& CampaignTime) {
}

void AStrategyMapManager::HandleCampaignHourChanged(const FMarsTime& CampaignTime) {
}

void AStrategyMapManager::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

int32 AStrategyMapManager::GetTotalMissionsFailed() const {
    return 0;
}

int32 AStrategyMapManager::GetTotalMissionsCompleted() const {
    return 0;
}

int32 AStrategyMapManager::GetTerraformersDestroyed() const {
    return 0;
}

TArray<ARegion*> AStrategyMapManager::GetRegionsSortedByIncome(EStrategyResourceType ResourceSortType) {
    return TArray<ARegion*>();
}

ARegion* AStrategyMapManager::GetRegionByName(const FString& InName) const {
    return NULL;
}

int32 AStrategyMapManager::GetMapZoomLevel_Implementation() const {
    return 0;
}

EDifficulty AStrategyMapManager::GetGameDifficulty() const {
    return EDifficulty::None;
}

int32 AStrategyMapManager::GetColoniesDestroyed() const {
    return 0;
}

void AStrategyMapManager::ExecuteStoryEvent() {
}

void AStrategyMapManager::ExecuteResearchEvent() {
}

void AStrategyMapManager::ExecuteOutpostEvent() {
}

void AStrategyMapManager::ExecuteMissionEvent() {
}

void AStrategyMapManager::ExecuteEngineeringEvent() {
}

void AStrategyMapManager::CancelOutpost(AOutpost* InOutpost) {
}

bool AStrategyMapManager::CanBuildOutpost(ARegion* TargetRegion) const {
    return false;
}

AOutpost* AStrategyMapManager::BuildOutpost(ARegion* TargetRegion, bool bFreeConstruction, bool bIgnoreRequirements) {
    return NULL;
}

void AStrategyMapManager::AdjustRegionVisibility() {
}

void AStrategyMapManager::AddTimedFlag(FStrategyTimedFlag NewTimedFlag) {
}

UStoryMapEvent* AStrategyMapManager::AddStoryEvent() {
    return NULL;
}

UResearchMapEvent* AStrategyMapManager::AddResearchEvent() {
    return NULL;
}

UOutpostMapEvent* AStrategyMapManager::AddOutpostEvent() {
    return NULL;
}

UMissionMapEvent* AStrategyMapManager::AddMissionEvent() {
    return NULL;
}

UEngineeringMapEvent* AStrategyMapManager::AddEngineeringEvent() {
    return NULL;
}

void AStrategyMapManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyMapManager, CampaignCurrentTime);
    DOREPLIFETIME(AStrategyMapManager, TimeTickSpeed);
    DOREPLIFETIME(AStrategyMapManager, TimedFlags);
}


