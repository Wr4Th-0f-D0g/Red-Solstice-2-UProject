#include "BiomassManager.h"
#include "Net/UnrealNetwork.h"

ABiomassManager::ABiomassManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ExterminationCheckTime = 30.00f;
    this->UpdateCycleTime = 1.00f;
    this->ForceUpdateDelay = 5.00f;
    this->UpdateTextureTimeout = 2.00f;
    this->bIsWorkHalted = false;
    this->MaxNumMonstersToSpawnAtOnce = 40;
    this->CenterActorToInitSpawn = NULL;
    this->bMonsterSpawnsEnabled = true;
    this->NumAvailableTokens = 0;
    this->bUnlimitedTokens = false;
    this->BiomassStartMonth = 2;
    this->BiomassRenderTaget = NULL;
    this->StampMaterial = NULL;
    this->MaterialParameterCollection = NULL;
    this->BiomassFadeoutCurve = NULL;
    this->BiomassDamageDefaultFalloffCurve = NULL;
    this->BiomassTexture = NULL;
    this->DynamicStamp = NULL;
    this->RTCanvas = NULL;
    this->RenderTargetLerpAlpha = 0.00f;
    this->IsAdjustMapSizeToMapBounds = true;
    this->UpdateCharacterPresenceUpdateTime = 0.50f;
    this->WriteDebugLog = false;
    this->DrawDebugInfo = false;
    this->BugFixVal = false;
}

void ABiomassManager::UpdatePlayersOnBiomass() {
}

void ABiomassManager::UpdateDivisionTokens() {
}

void ABiomassManager::StartWork() {
}

void ABiomassManager::ScheduleKillBiomass(ABiomassCenterActor* InActor, float InDelay, APawn* InInstigator) {
}

void ABiomassManager::RemoveForbiddenBiomassSpawnLocation(int32 InId) {
}

void ABiomassManager::OnLocationsMapped(ULocationManager* InSender) {
}

bool ABiomassManager::IsPointOnBiomass(const FVector InLocation, float InBiomassCoverPercentageRequired) {
    return false;
}

bool ABiomassManager::IsMonsterSpawnsEnabled() {
    return false;
}

bool ABiomassManager::IsLocationAllowedForBiomassSpawn(FVector InLocation, float InBiomassRadius) {
    return false;
}

bool ABiomassManager::HasStarted() {
    return false;
}

void ABiomassManager::HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime) {
}

void ABiomassManager::HandleDamageSerializerDataChanged() {
}

void ABiomassManager::HandleBiomassCenterKilled(ABiomassCenterActor* InActorKilled) {
}

void ABiomassManager::HandleActorKilled(AActor* InKilledActor, const FDamage& InDamageInfo, bool bRecentlyDied) {
}

int32 ABiomassManager::GetTotalNumSpawnedMonsters() {
    return 0;
}

TArray<ABiomassCenterActor*> ABiomassManager::GetRegisteredBiomassActors() {
    return TArray<ABiomassCenterActor*>();
}

void ABiomassManager::GetPlayersOnBiomass(TArray<ASolsticeCharacterBase*>& OutHeroes, bool bInOnlyLiveHeroes) {
}

int32 ABiomassManager::GetNumPlayersOnBiomass(bool InOnlyLiveHeroes) {
    return 0;
}

int32 ABiomassManager::GetNumCenterActorsInRadiusFromPoint(FVector InPointLocation, float InRadius) {
    return 0;
}

ABiomassCenterActor* ABiomassManager::GetNearestCenterActor(FVector InPointLocation) {
    return NULL;
}

int32 ABiomassManager::GetMaxNumMonstersToBeSpawnedAtOnce() {
    return 0;
}

float ABiomassManager::GetDistanceToBiomassEdge(const FVector Point) {
    return 0.0f;
}

float ABiomassManager::GetDistanceToBiomassCenterSq(const FVector Point) {
    return 0.0f;
}

float ABiomassManager::GetDistanceToBiomassCenter(const FVector Point) {
    return 0.0f;
}

TArray<ABiomassCenterActor*> ABiomassManager::GetCenterActorsWithinMaxRadiusOfPoint(FVector InPointLocation) {
    return TArray<ABiomassCenterActor*>();
}

TArray<ABiomassCenterActor*> ABiomassManager::GetCenterActorsOverlappingPoint(FVector InPointLocation) {
    return TArray<ABiomassCenterActor*>();
}

TArray<ABiomassCenterActor*> ABiomassManager::GetCenterActorsInRadiusFromPoint(FVector InPointLocation, float InRadius) {
    return TArray<ABiomassCenterActor*>();
}

UCurveFloat* ABiomassManager::GetBiomassFadeoutCurve() {
    return NULL;
}

UCurveFloat* ABiomassManager::GetBiomassDamageDefaultFalloffCurve() {
    return NULL;
}

float ABiomassManager::GetBiomassCoverageValueAtPoint(FVector InLocation) {
    return 0.0f;
}

void ABiomassManager::FindMapBounds() {
}

bool ABiomassManager::FindLMABiomassSpawnLocation(FTransform& OutLocation) {
    return false;
}

void ABiomassManager::DrawDebugTextureArray() {
}

void ABiomassManager::DoFastSpread(int32 NumCentersToSpawn) {
}

void ABiomassManager::DebugDealBiomassDamage() {
}

void ABiomassManager::DealBiomassDamageStandard(float InIntensity, float InRange, FVector InLocation) {
}

void ABiomassManager::DealBiomassDamage(FBiomassDamageData InData) {
}

bool ABiomassManager::AreAnyCenterActorsInRadiusOfPoint(FVector InPointLocation, float InRadius, ABiomassCenterActor* InIgnoredActor) {
    return false;
}

int32 ABiomassManager::AddForbiddenBiomassSpawnAreaSphere(FVector InLocation, float InRadius, EBiomassForbiddenZoneType InZoneType, float InTime) {
    return 0;
}

int32 ABiomassManager::AddForbiddenBiomassSpawnAreaBox(FBox InBox, FRotator InRotation, EBiomassForbiddenZoneType InZoneType, float InTime) {
    return 0;
}

void ABiomassManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABiomassManager, BugFixVal);
    DOREPLIFETIME(ABiomassManager, DamageFastArraySerializer);
}


