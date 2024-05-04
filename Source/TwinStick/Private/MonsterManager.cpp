#include "MonsterManager.h"
#include "AIAvoidanceManager.h"
#include "Templates/SubclassOf.h"

UMonsterManager::UMonsterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableNavRecovery = false;
    this->BuildingNavModifierClass = NULL;
    this->bSpawnHunters = false;
    this->NumHunters = 0;
    this->CreeperSpawnDelay = 0.00f;
    this->bDisableCreeperInsideBuildingCheck = false;
    this->bSpawnCreepers = false;
    this->NumberOfCreepers = 0;
    this->bSpawnBuildingMonsters = false;
    this->bUseGroupDataTable = false;
    this->NumBuildingMonstersToSpawn = 0;
    this->bDisableIndoorMapCheck = false;
    this->bUseBuildingAmounts = true;
    this->MaxBuildingAmount = 0;
    this->MinMonstersPerBuilding = 0;
    this->MaxMonstersPerBuilding = 0;
    this->BuildingMonsterSpawnDelay = 0.50f;
    this->RadiusToSpawn = 0;
    this->bDebugCollisionCheck = false;
    this->AvoidanceManager = CreateDefaultSubobject<UAIAvoidanceManager>(TEXT("AvoidanceManager"));
    this->bShowAIDebugs = false;
}

void UMonsterManager::SpawnMonstersOnLocationByTags(TArray<FName> InTags) {
}

void UMonsterManager::SpawnMonsterNextTick(const FGameplayTag MonsterTag, FTransform MonsterTransform, bool bUseWaveData) {
}

void UMonsterManager::SpawnHunters(int32 InNumHunters) {
}

void UMonsterManager::SpawnCreepers(int32 Amount) {
}

void UMonsterManager::SpawnBuildingMonsters(ULocationManager* InLocManager) {
}

void UMonsterManager::RemoveFromPack(AMonsterControllerBase* LeaderController, AMonsterControllerBase* MonsterToRemove) {
}

void UMonsterManager::OnLocationsMapped(ULocationManager* LocManager) {
}

void UMonsterManager::MapBuildingsReady() {
}

UAIAvoidanceManager* UMonsterManager::K2_GetAvoidanceManager() const {
    return NULL;
}

bool UMonsterManager::IsTargetInsideBuilding(AActor* TestActor) {
    return false;
}

bool UMonsterManager::IsLeaderClose(AMonsterCharacterBase* MonsterA, AMonsterCharacterBase* MonsterB, float MaxDistance) {
    return false;
}

bool UMonsterManager::InternalDoorUnOccupied(ADoorBase* Door) const {
    return false;
}

void UMonsterManager::InternalDoorSetOccupied(ADoorBase* Door, AMonsterCharacterBase* Monster) {
}

void UMonsterManager::InternalDoorRemoveOccupied(ADoorBase* Door, AMonsterCharacterBase* Monster) {
}

TArray<ADoorBase*> UMonsterManager::GetUnoccupiedInternalDoors(AMonsterCharacterBase* RequestingMonster, float DoorHealthRequired, bool bCheckPlayer, float Distance) {
    return TArray<ADoorBase*>();
}

FVector UMonsterManager::GetTargetPosition(AMonsterControllerBase* AIController, AActor* TargetActor) {
    return FVector{};
}

bool UMonsterManager::GetShowAIDebugs() const {
    return false;
}

ANestBase* UMonsterManager::GetNearestNest(AMonsterCharacterBase* Monster, TSubclassOf<UNavigationQueryFilter> QueryFilter, bool bCheckOccupied, bool bPathTest) {
    return NULL;
}

TMap<FString, TSoftClassPtr<AMonsterCharacterBase>> UMonsterManager::GetMonsterStringAndClass() const {
    return TMap<FString, TSoftClassPtr<AMonsterCharacterBase>>();
}

FVector UMonsterManager::GetMonsterFloorPos() {
    return FVector{};
}

TArray<APowerConsumer*> UMonsterManager::GetInactiveLightTerminals() {
    return TArray<APowerConsumer*>();
}

TArray<FLocationInfo> UMonsterManager::GetBuildingsWithWindows() const {
    return TArray<FLocationInfo>();
}

TArray<AMonsterCharacterBase*> UMonsterManager::GetAllBurrowers() const {
    return TArray<AMonsterCharacterBase*>();
}

TArray<APowerConsumer*> UMonsterManager::GetActiveLightTerminals() {
    return TArray<APowerConsumer*>();
}

bool UMonsterManager::FindPackLeader(AMonsterCharacterBase* SelfMonster, int32 MaxMembers, AMonsterCharacterBase*& OutPackLeader, int32& OutPackMembers, float MaxLeaderDistance) {
    return false;
}

AMonsterCharacterBase* UMonsterManager::FindMonsterByController(AMonsterControllerBase* InController) const {
    return NULL;
}

void UMonsterManager::CreatePack(AMonsterCharacterBase* PackLeader) {
}

bool UMonsterManager::CanNavigateToEQSLoc(FVector OldLoc, FVector NewLoc, float DeniedDistance) {
    return false;
}

void UMonsterManager::AddToCreatedPack(AMonsterCharacterBase* PackMember, AMonsterCharacterBase* Leader) {
}


