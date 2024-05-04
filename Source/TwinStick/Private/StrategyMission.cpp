#include "StrategyMission.h"
#include "Components/StaticMeshComponent.h"
#include "PaperSpriteComponent.h"
#include "Net/UnrealNetwork.h"

AStrategyMission::AStrategyMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MissionMesh"));
    this->MIssionSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("MIssionSprite"));
    this->MissionIcon = NULL;
    this->campaignmissionIcon = NULL;
    this->DeploymentObjectClass = NULL;
    this->DeploymentObject = NULL;
    this->MissionSetupActorClass = NULL;
    this->MissionSetupActor = NULL;
    this->bShowMissionInfoWhenClicked = false;
    this->MissionCallToActionClass = NULL;
    this->SpawnGenerationSeed = -1;
    this->CampaignIcon = NULL;
    this->CombatIcon = NULL;
    this->SupplyIcon = NULL;
    this->bMissionDetected = false;
    this->MissionToken = EStrategyMissionToken::Invalid;
    this->bMissionExpired = false;
    this->bMissionStatusReplicatedBefore = false;
    this->MissionMesh->SetupAttachment(RootComponent);
    this->MIssionSprite->SetupAttachment(RootComponent);
}

void AStrategyMission::TestPostMissionData(bool bVictory) {
}

bool AStrategyMission::ShouldShowCallToAction_Implementation() const {
    return false;
}

bool AStrategyMission::ShouldPlayGlitchEffectBeforeCTA_Implementation() {
    return false;
}

void AStrategyMission::SetMissionCompleted(AMissionSetupActor* InMSA) {
}


void AStrategyMission::OverrideLifetime(int32 Hours, bool bCanExpire) {
}

void AStrategyMission::OnRep_ReplicatedMissionTag() {
}

void AStrategyMission::OnRep_PostMissionData() {
}

void AStrategyMission::OnRep_MissionStatus() {
}

void AStrategyMission::OnRep_MissionSetupActor() {
}

void AStrategyMission::OnRep_MissionEffects() {
}


bool AStrategyMission::MissionCanExpire() const {
    return false;
}

void AStrategyMission::LaunchMission() {
}

bool AStrategyMission::IsScanMission() const {
    return false;
}

bool AStrategyMission::IsCombatMission() const {
    return false;
}

bool AStrategyMission::IsCampaignMission_Implementation() const {
    return false;
}

bool AStrategyMission::HasSpecialNameRequirementFromFailureEffects(FGameplayTagContainer InContainer, FGameplayTag& FoundTag) {
    return false;
}

void AStrategyMission::HandleMissionExpired() {
}

void AStrategyMission::HandleMissionCompleted() {
}

void AStrategyMission::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

TArray<FMissionEffect> AStrategyMission::GetScanMissionEffects() const {
    return TArray<FMissionEffect>();
}

void AStrategyMission::GetRemainingTimeDaysHours(int32& Days, int32& Hours) const {
}

FMarsTime AStrategyMission::GetRemainingMissionTime() const {
    return FMarsTime{};
}

FGameplayTag AStrategyMission::GetMissionTag() const {
    return FGameplayTag{};
}

EStrategyMissionStatus AStrategyMission::GetMissionStatus() const {
    return EStrategyMissionStatus::Active;
}

UTexture2D* AStrategyMission::GetMissionIcon() const {
    return NULL;
}

TArray<FGameplayTag> AStrategyMission::GetMissionGrantedItems() {
    return TArray<FGameplayTag>();
}

FText AStrategyMission::GetMissionDisplayName() const {
    return FText::GetEmpty();
}

FStrategyMissionDescription AStrategyMission::GetMissionDescription() const {
    return FStrategyMissionDescription{};
}

UDataTable* AStrategyMission::GetMissionDataTable_Implementation() const {
    return NULL;
}

FStrategyMissionData AStrategyMission::GetMissionData() const {
    return FStrategyMissionData{};
}

EStrategyInteractionState AStrategyMission::GetInteractionStatus() const {
    return EStrategyInteractionState::None;
}

TArray<FMissionEffect> AStrategyMission::GetCondensedMissionRewardsForUI() {
    return TArray<FMissionEffect>();
}

void AStrategyMission::FinalizeMission() {
}

void AStrategyMission::DetectMission() {
}

bool AStrategyMission::CanEverExpire_Implementation() const {
    return false;
}


void AStrategyMission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyMission, MissionSetupActor);
    DOREPLIFETIME(AStrategyMission, SpawnGenerationSeed);
    DOREPLIFETIME(AStrategyMission, Region);
    DOREPLIFETIME(AStrategyMission, ReplicatedMissionTag);
    DOREPLIFETIME(AStrategyMission, SuccessEffects);
    DOREPLIFETIME(AStrategyMission, FailureEffects);
    DOREPLIFETIME(AStrategyMission, MissionStatus);
    DOREPLIFETIME(AStrategyMission, PostMissionData);
}


