#include "SolsticeObjectLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeObjectLibrary::USolsticeObjectLibrary() {
}

AActor* USolsticeObjectLibrary::SpawnActorWithCollisionCheckAtRandomLocation(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FVector> PossibleLocations, bool bKillOverlappingMonsters, bool& Success, bool bDrawDebug) {
    return NULL;
}

void USolsticeObjectLibrary::SetNavSystemLock(const UObject* WorldContextObject, bool bLocked) {
}

void USolsticeObjectLibrary::SetNavmeshFullyAsync(ANavigationData* NavData) {
}

void USolsticeObjectLibrary::RegisterFOWManager(const UObject* WorldContextObject, AFogOfWarManagerImpr* InFowManager) {
}

void USolsticeObjectLibrary::RegisterBurningManager(const UObject* WorldContextObject, ABurningManager* InBurningManager) {
}

void USolsticeObjectLibrary::RegisterBiomassManager(const UObject* WorldContextObject, ABiomassManager* InFowManager) {
}

bool USolsticeObjectLibrary::IsPlayInEditor(const UObject* WorldContextObject) {
    return false;
}

bool USolsticeObjectLibrary::IsLocallyControlled(AActor* ActorToQuery) {
    return false;
}

bool USolsticeObjectLibrary::IsAIControlled(AActor* ActorToQuery) {
    return false;
}

ASolsticeWorldSettings* USolsticeObjectLibrary::GetWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

UMovableVehicleManager* USolsticeObjectLibrary::GetVehicleManager(const UObject* WorldContextObject) {
    return NULL;
}

UTeamInstigatorManager* USolsticeObjectLibrary::GetTeamInstigatorManager(const UObject* WorldContextObject) {
    return NULL;
}

USurvivorsSingleton* USolsticeObjectLibrary::GetSurvivorsSingleton() {
    return NULL;
}

AStrategyHUDBase* USolsticeObjectLibrary::GetStrategyHUD(const UObject* WorldContextObject) {
    return NULL;
}

AStrategyGameModeBase* USolsticeObjectLibrary::GetStrategyGameMode(const UObject* WorldContextObject) {
    return NULL;
}

USpawnManager* USolsticeObjectLibrary::GetSpawnManager(const UObject* WorldContextObject) {
    return NULL;
}

USolsticeTutorialManager* USolsticeObjectLibrary::GetSolsticeTutorialManager(const UObject* WorldContextObject) {
    return NULL;
}

UChroniclesGameInstance* USolsticeObjectLibrary::GetSolsticeGI(const UObject* WorldContextObject) {
    return NULL;
}

ASolsticeHUD_Base* USolsticeObjectLibrary::GetSolstice_HUD(const UObject* WorldContextObject) {
    return NULL;
}

ASafeZoneBase* USolsticeObjectLibrary::GetSafeZone(const UObject* WorldContextObject) {
    return NULL;
}

ARTS_HUD_Base* USolsticeObjectLibrary::GetRTS_HUD(const UObject* WorldContextObject) {
    return NULL;
}

ARTS_GameState* USolsticeObjectLibrary::GetRTS_GameState(const UObject* WorldContextObject) {
    return NULL;
}

ARTS_GameMode* USolsticeObjectLibrary::GetRTS_GameMode(const UObject* WorldContextObject) {
    return NULL;
}

void USolsticeObjectLibrary::GetRegisteredPickupsInRangeOfPoint(const UObject* WorldContextObject, TArray<AInventoryPickup*>& OutPickups, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending) {
}

void USolsticeObjectLibrary::GetRegisteredPickups(const UObject* WorldContextObject, TArray<AInventoryPickup*>& OutPickups) {
}

void USolsticeObjectLibrary::GetRegisteredLockersInRangeOfPoint(const UObject* WorldContextObject, TArray<ALocker*>& OutLockers, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending, bool bInOnlyLootable) {
}

void USolsticeObjectLibrary::GetRegisteredLockersAndPickupsInRangeOfPoint(const UObject* WorldContextObject, TArray<AActor*>& OutItems, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending, bool bInOnlyLootableLockers) {
}

void USolsticeObjectLibrary::GetRegisteredLockers(const UObject* WorldContextObject, TArray<ALocker*>& OutLockers) {
}

APrefabActor* USolsticeObjectLibrary::GetPrefabActorForActor(AActor* InActor, bool bTopLevel) {
    return NULL;
}

UPowerManager* USolsticeObjectLibrary::GetPowerManager(const UObject* WorldContextObject) {
    return NULL;
}

UPoolManager* USolsticeObjectLibrary::GetPoolManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetPlayerPawns(const UObject* WorldContextObject, bool bIncludeDead, bool bIgnoreEvac) {
    return TArray<ASolsticeCharacterBase*>();
}

UPlatformSaveManager* USolsticeObjectLibrary::GetPlatformSaveManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetPawnsByAttitudeInRadius(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TEnumAsByte<ETeamAttitude::Type> TeamAttitude, const FVector& Location, float Radius, bool bAIRegistered, bool bIncludeIncapacitated, bool bUseFeetLocation, bool bIgnoreRequestingActor) {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetPawnsByAttitude(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TEnumAsByte<ETeamAttitude::Type> TeamAttitude, bool bAIRegistered, bool bIncludeIncapacitated, bool bIgnoreRequestingActor) {
    return TArray<ASolsticeCharacterBase*>();
}

int32 USolsticeObjectLibrary::GetNumberOfFriendlyMarinesInRadius(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreFollowerBots, bool bIgnoreFriendlyMarines) {
    return 0;
}

UNavigationSystemV1* USolsticeObjectLibrary::GetNavigationSystem(const UObject* WorldContextObject) {
    return NULL;
}

ANavigationData* USolsticeObjectLibrary::GetNavigationDataFor(const AActor* Actor) {
    return NULL;
}

ANavigationData* USolsticeObjectLibrary::GetNavigationDataAgentProps(AActor* InActor, FNavAgentProperties Props) {
    return NULL;
}

ANavigationData* USolsticeObjectLibrary::GetNavigationData(const UObject* WorldContextObject) {
    return NULL;
}

UMusicManager* USolsticeObjectLibrary::GetMusicManager(const UObject* WorldContextObject) {
    return NULL;
}

UMonsterManager* USolsticeObjectLibrary::GetMonsterManager(const UObject* WorldContextObject) {
    return NULL;
}

AMissionSetupActor* USolsticeObjectLibrary::GetMissionSetupActor(const UObject* WorldContextObject) {
    return NULL;
}

AMissionManagerBase* USolsticeObjectLibrary::GetMissionManager(const UObject* WorldContextObject) {
    return NULL;
}

AMediaPlayerActor* USolsticeObjectLibrary::GetMediaPlayer(const UObject* WorldContextObject) {
    return NULL;
}

AMapSystemManager* USolsticeObjectLibrary::GetMapSystemManager(const UObject* WorldContextObject) {
    return NULL;
}

ULootManager* USolsticeObjectLibrary::GetLootManager(const UObject* WorldContextObject) {
    return NULL;
}

ULocationManager* USolsticeObjectLibrary::GetLocationManager(const UObject* WorldContextObject) {
    return NULL;
}

ARTS_PlayerController* USolsticeObjectLibrary::GetLocalRTSController(const UObject* WorldContextObject) {
    return NULL;
}

APlayerState* USolsticeObjectLibrary::GetLocalPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

AHeroCharacterBase* USolsticeObjectLibrary::GetLocalPlayerPawn(const UObject* WorldContextObject) {
    return NULL;
}

APlayerController* USolsticeObjectLibrary::GetLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetLivingPlayerPawns(const UObject* WorldContextObject, bool bIgnoreEvac) {
    return TArray<ASolsticeCharacterBase*>();
}

ELevelType USolsticeObjectLibrary::GetLevelType(const UObject* WorldContextObject) {
    return ELevelType::ELT_Invalid;
}

ALevelSpecificsActor* USolsticeObjectLibrary::GetLevelManager(const UObject* WorldContextObject) {
    return NULL;
}

ASolsticeLevelActorBase* USolsticeObjectLibrary::GetLevelActor(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetHostileOrNeutralPawns(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, bool bAIRegistered, bool bIncludeIncapacitated) {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<AHeroCharacterBase*> USolsticeObjectLibrary::GetFriendlyMarinesInRadius(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots) {
    return TArray<AHeroCharacterBase*>();
}

TArray<AHeroCharacterBase*> USolsticeObjectLibrary::GetFriendlyMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots) {
    return TArray<AHeroCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetFriendlyBots(const UObject* WorldContextObject, bool bIncludeDead) {
    return TArray<ASolsticeCharacterBase*>();
}

AFogOfWarManagerImpr* USolsticeObjectLibrary::GetFOWManager(const UObject* WorldContextObject) {
    return NULL;
}

UFollowerDirector* USolsticeObjectLibrary::GetFollowerDirector(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASolsticeCharacterBase*> USolsticeObjectLibrary::GetFollowerBots(const UObject* WorldContextObject, bool bIncludeDead) {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ADynamicActorBase*> USolsticeObjectLibrary::GetDynamicActorsAttachedToPrefab(APrefabActor* InPrefabActor, bool bIncludeChildrenPrefabActors) {
    return TArray<ADynamicActorBase*>();
}

TArray<ADynamicActorBase*> USolsticeObjectLibrary::GetDynamicActors(const UObject* WorldContextObject, TSubclassOf<ADynamicActorBase> DynamicActorClass) {
    return TArray<ADynamicActorBase*>();
}

ADropshipControllerBase* USolsticeObjectLibrary::GetDropshipController(const UObject* WorldContextObject) {
    return NULL;
}

ADialogActor* USolsticeObjectLibrary::GetDialogActor(const UObject* WorldContextObject) {
    return NULL;
}

ADestructibleMeshManagerBase* USolsticeObjectLibrary::GetDestructibleMeshManager(const UObject* WorldContextObject) {
    return NULL;
}

UDesignationManager* USolsticeObjectLibrary::GetDesignationManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AHeroCharacterBase*> USolsticeObjectLibrary::GetDeadFriendlyMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots) {
    return TArray<AHeroCharacterBase*>();
}

UCorsairSubsystem* USolsticeObjectLibrary::GetCorsairSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

UConnectedMeshManagerBase* USolsticeObjectLibrary::GetConnectedMeshSystemManager(const UObject* WorldContextObject) {
    return NULL;
}

UCivilianManager* USolsticeObjectLibrary::GetCivilianManager(const UObject* WorldContextObject) {
    return NULL;
}

ABurningManager* USolsticeObjectLibrary::GetBurningManager(const UObject* WorldContextObject) {
    return NULL;
}

void USolsticeObjectLibrary::GetBoundsOfActorByAttachedActors(AActor* InActor, bool bNonColliding, FVector& OutOrigin, FVector& OutExtent) {
}

UBodyPartPoolComponent* USolsticeObjectLibrary::GetBodyPartPool(const UObject* WorldContextObject) {
    return NULL;
}

ABiomassManager* USolsticeObjectLibrary::GetBiomassManager(const UObject* WorldContextObject) {
    return NULL;
}

void USolsticeObjectLibrary::GetAttachedActors(TArray<AActor*>& OutResults, const AActor* InActor, const bool bClearArray, const bool bRecursive) {
}

AAtmosphereController* USolsticeObjectLibrary::GetAtmosphereController(const UObject* WorldContextObject) {
    return NULL;
}

TArray<APrefabActor*> USolsticeObjectLibrary::GetAllTopLevelPrefabs(const UObject* WorldContextObject) {
    return TArray<APrefabActor*>();
}

void USolsticeObjectLibrary::GetAllNonMonsterPawns(const UObject* WorldContextObject, TArray<ASolsticeCharacterBase*>& OutCharacters) {
}

TArray<AHeroCharacterBase*> USolsticeObjectLibrary::GetAllMarinesInRange(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnoreEnemyMarines, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreFriendlyMarineBots) {
    return TArray<AHeroCharacterBase*>();
}

TArray<AHeroCharacterBase*> USolsticeObjectLibrary::GetAllMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnoreEnemyMarines, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreFriendlyMarineBots) {
    return TArray<AHeroCharacterBase*>();
}

TArray<ALight*> USolsticeObjectLibrary::GetAllAttachedLights(AActor* ParentActor, TArray<FName> ActorTags) {
    return TArray<ALight*>();
}

TArray<ADoorBase*> USolsticeObjectLibrary::GetAllAttachedDoors(AActor* ParentActor, bool bUseActorTags, TArray<FName> ActorTags, bool bUseGameplayTags, FGameplayTagContainer GameplayTags) {
    return TArray<ADoorBase*>();
}

void USolsticeObjectLibrary::GetAllActorsWithGameplayTags(const UObject* WorldContextObject, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, TArray<AActor*>& OutActors) {
}

void USolsticeObjectLibrary::GetAllActorsWithGameplayTag(const UObject* WorldContextObject, FGameplayTag Tag, TArray<AActor*>& OutActors) {
}

void USolsticeObjectLibrary::GetAllActorsOfClassWithGameplayTags(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, TArray<AActor*>& OutActors) {
}

void USolsticeObjectLibrary::GetAllActorsOfClassWithGameplayTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTag Tag, TArray<AActor*>& OutActors) {
}

UAIDirector* USolsticeObjectLibrary::GetAIDirector(const UObject* WorldContextObject) {
    return NULL;
}

APawn* USolsticeObjectLibrary::FindClosestPlayerToPlayer(const APawn* InPawn, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead) {
    return NULL;
}

APawn* USolsticeObjectLibrary::FindClosestPlayer(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead) {
    return NULL;
}

APawn* USolsticeObjectLibrary::FindClosestMarine(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead) {
    return NULL;
}

ASolsticeCharacterBase* USolsticeObjectLibrary::FindClosestFriendlyMarine(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreFollowerBots, bool bIgnoreFriendlyMarines) {
    return NULL;
}

APawn* USolsticeObjectLibrary::FindClosestAlivePlayerToPlayer(const APawn* InPawn, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance) {
    return NULL;
}

APawn* USolsticeObjectLibrary::FindClosestAlivePlayer(const UObject* WorldContextObject, FVector Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance) {
    return NULL;
}

ASolsticeCharacterBase* USolsticeObjectLibrary::FindClosestAliveByAttitudePreferredTeam(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance, ESolsticeTeam PreferredTeam) {
    return NULL;
}

ASolsticeCharacterBase* USolsticeObjectLibrary::FindClosestAliveByAttitudeByThreat(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, EEnemyThreatLevel ThreatLevel, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance) {
    return NULL;
}

ASolsticeCharacterBase* USolsticeObjectLibrary::FindClosestAliveByAttitude(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance) {
    return NULL;
}

bool USolsticeObjectLibrary::CheckIsPlayer(const UObject* WorldContextObject, AActor* ActorToCheck) {
    return false;
}


