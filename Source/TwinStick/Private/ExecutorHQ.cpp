#include "ExecutorHQ.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "StrategyEngineeringManager.h"
#include "StrategyResearchManager.h"
#include "StrategyUpgradeComponent.h"
#include "Templates/SubclassOf.h"

AExecutorHQ::AExecutorHQ(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResearchManager = CreateDefaultSubobject<UStrategyResearchManager>(TEXT("ResearchManager"));
    this->EngineeringManager = CreateDefaultSubobject<UStrategyEngineeringManager>(TEXT("EngineeringManager"));
    this->UpgradeComponent = CreateDefaultSubobject<UStrategyUpgradeComponent>(TEXT("UpgradeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->LowDeploymentNotificationWidgetClass = NULL;
    this->LowDeploymentNotificationWidget = NULL;
    this->InTransitNotificationWidgetClass = NULL;
    this->InTransitNotificationWidget = NULL;
    this->InTransitEventWidgetClass = NULL;
    this->InTransitEventWidget = NULL;
    this->SavedHQ_HitPoints = 100.00f;
    this->supplies = 0;
    this->deployment = 0;
    this->Specialists = 0;
    this->Status = EHQStatus::Deployed;
    this->HQ_SplineActorClass = NULL;
    this->HQ_SplineActor = NULL;
    this->HQ_PreviewSplineActor = NULL;
    this->HQ_Speed = 15.00f;
    this->DistanceTravelled = 0.00f;
    this->InTransitEventIcon = NULL;
}

void AExecutorHQ::TryAddColonyBonuses() {
}

void AExecutorHQ::ShowLowDeploymentNotificationWidget() {
}

void AExecutorHQ::ShowInTransitNotificationWidget() {
}

void AExecutorHQ::ShowInTransitEventWidget() {
}

void AExecutorHQ::SetSupplies(int32 Value) {
}

void AExecutorHQ::SetSpecialists(int32 Value) {
}

void AExecutorHQ::SetDeployment(int32 Value) {
}

void AExecutorHQ::RemoveStrategyLayerBuff(const FMissionEffect& BuffEffect) {
}

void AExecutorHQ::RemoveReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks) {
}

void AExecutorHQ::RemoveMissionEffect(const FMissionEffectContainer& EffectContainer, ARegion* InRegion) {
}

void AExecutorHQ::RemoveLowDeploymentNotificationWidget() {
}

void AExecutorHQ::RemoveInTransitNotificationWidget() {
}

void AExecutorHQ::RemoveInTransitEventWidget() {
}

void AExecutorHQ::RemoveCombatLayerBuff(const FMissionEffect& BuffEffect) {
}

void AExecutorHQ::OnRep_Supplies() {
}

void AExecutorHQ::OnRep_Specialists() {
}

void AExecutorHQ::OnRep_NetworkMovementHelper() {
}

void AExecutorHQ::OnRep_Deployment() {
}

void AExecutorHQ::MoveToRegion(ARegion* InRegion, bool bResetDistance, bool bIgnoreChecks) {
}

bool AExecutorHQ::HQGrantsColonyBonus() const {
    return false;
}



bool AExecutorHQ::HasReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff) {
    return false;
}

void AExecutorHQ::HandleResearchChanged(UTechObject* TechObject) {
}

void AExecutorHQ::HandleProductionStatusChanged(UEngineeringObject* EngineeringObject, EProductionStatus ProductionStatus) {
}

void AExecutorHQ::HandleProductionChanged(UEngineeringObject* EngineeringObject) {
}

void AExecutorHQ::HandleOutpostLevelChanged(AOutpost* Outpost, int32 Level) {
}


void AExecutorHQ::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

void AExecutorHQ::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

int32 AExecutorHQ::GetUpgradeLevelFor(const FGameplayTag& InTag) const {
    return 0;
}

int32 AExecutorHQ::GetSupplies() const {
    return 0;
}

TMap<TSubclassOf<USolsticeBuffBase>, int32> AExecutorHQ::GetStrategyLayerBuffs() const {
    return TMap<TSubclassOf<USolsticeBuffBase>, int32>();
}

int32 AExecutorHQ::GetSpecialists() const {
    return 0;
}

float AExecutorHQ::GetPreviewPathLength(ARegion* InRegion) const {
    return 0.0f;
}

float AExecutorHQ::GetMinimumIntelAdjacentRegion() const {
    return 0.0f;
}

float AExecutorHQ::GetMinimumIntel() const {
    return 0.0f;
}

UStrategyMapDefinitions* AExecutorHQ::GetMapDefinitions() const {
    return NULL;
}

float AExecutorHQ::GetIntelPerHourAdjacentRegion() const {
    return 0.0f;
}

float AExecutorHQ::GetIntelGeneratedPerHour() const {
    return 0.0f;
}

int32 AExecutorHQ::GetFreeSpecialists() const {
    return 0;
}

float AExecutorHQ::GetDropshipIntelPerHour() const {
    return 0.0f;
}

int32 AExecutorHQ::GetDeployment() const {
    return 0;
}

TMap<TSubclassOf<USolsticeBuffBase>, int32> AExecutorHQ::GetCombatLayerBuffs() const {
    return TMap<TSubclassOf<USolsticeBuffBase>, int32>();
}

float AExecutorHQ::GetAttributeValue(EAttribute InAttribute) const {
    return 0.0f;
}

void AExecutorHQ::ExpendSupplies(int32 Value) {
}

void AExecutorHQ::ExpendSpecialists(int32 Value, bool bPauseAllEngineering) {
}

void AExecutorHQ::ExpendDeployment(int32 Value) {
}

bool AExecutorHQ::CanTakeDamage() const {
    return false;
}

bool AExecutorHQ::CanMoveToRegion(ARegion* InRegion) const {
    return false;
}

void AExecutorHQ::ApplyMissionEffects(const FMissionEffectContainer& EffectContainer, ARegion* InRegion) {
}

void AExecutorHQ::AddSupplies(int32 Value) {
}

void AExecutorHQ::AddStrategyLayerBuff(const FMissionEffect& BuffEffect) {
}

void AExecutorHQ::AddSpecialists(int32 Value) {
}

void AExecutorHQ::AddReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks) {
}

void AExecutorHQ::AddDeployment(int32 Value) {
}

void AExecutorHQ::AddCombatLayerBuff(const FMissionEffect& BuffEffect) {
}

void AExecutorHQ::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExecutorHQ, Dropship);
    DOREPLIFETIME(AExecutorHQ, supplies);
    DOREPLIFETIME(AExecutorHQ, deployment);
    DOREPLIFETIME(AExecutorHQ, Specialists);
    DOREPLIFETIME(AExecutorHQ, NetworkMovementHelper);
}


