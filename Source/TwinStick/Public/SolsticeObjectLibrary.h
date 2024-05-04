#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AI/Navigation/NavigationTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EEnemyThreatLevel.h"
#include "ELevelType.h"
#include "ESolsticeTeam.h"
#include "Templates/SubclassOf.h"
#include "SolsticeObjectLibrary.generated.h"

class AActor;
class AAtmosphereController;
class ABiomassManager;
class ABurningManager;
class ADestructibleMeshManagerBase;
class ADialogActor;
class ADoorBase;
class ADropshipControllerBase;
class ADynamicActorBase;
class AFogOfWarManagerImpr;
class AHeroCharacterBase;
class AInventoryPickup;
class ALevelSpecificsActor;
class ALight;
class ALocker;
class AMapSystemManager;
class AMediaPlayerActor;
class AMissionManagerBase;
class AMissionSetupActor;
class ANavigationData;
class APawn;
class APlayerController;
class APlayerState;
class APrefabActor;
class ARTS_GameMode;
class ARTS_GameState;
class ARTS_HUD_Base;
class ARTS_PlayerController;
class ASafeZoneBase;
class ASolsticeCharacterBase;
class ASolsticeHUD_Base;
class ASolsticeLevelActorBase;
class ASolsticeWorldSettings;
class AStrategyGameModeBase;
class AStrategyHUDBase;
class IGenericTeamAgentInterface;
class UGenericTeamAgentInterface;
class UAIDirector;
class UBodyPartPoolComponent;
class UChroniclesGameInstance;
class UCivilianManager;
class UConnectedMeshManagerBase;
class UCorsairSubsystem;
class UDesignationManager;
class UFollowerDirector;
class ULocationManager;
class ULootManager;
class UMonsterManager;
class UMovableVehicleManager;
class UMusicManager;
class UNavigationSystemV1;
class UObject;
class UPlatformSaveManager;
class UPoolManager;
class UPowerManager;
class USolsticeTutorialManager;
class USpawnManager;
class USurvivorsSingleton;
class UTeamInstigatorManager;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeObjectLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeObjectLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorWithCollisionCheckAtRandomLocation(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FVector> PossibleLocations, bool bKillOverlappingMonsters, bool& Success, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNavSystemLock(const UObject* WorldContextObject, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    static void SetNavmeshFullyAsync(ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterFOWManager(const UObject* WorldContextObject, AFogOfWarManagerImpr* InFowManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterBurningManager(const UObject* WorldContextObject, ABurningManager* InBurningManager);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterBiomassManager(const UObject* WorldContextObject, ABiomassManager* InFowManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocallyControlled(AActor* ActorToQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIControlled(AActor* ActorToQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASolsticeWorldSettings* GetWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMovableVehicleManager* GetVehicleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTeamInstigatorManager* GetTeamInstigatorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USurvivorsSingleton* GetSurvivorsSingleton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyHUDBase* GetStrategyHUD(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyGameModeBase* GetStrategyGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USpawnManager* GetSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USolsticeTutorialManager* GetSolsticeTutorialManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UChroniclesGameInstance* GetSolsticeGI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASolsticeHUD_Base* GetSolstice_HUD(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASafeZoneBase* GetSafeZone(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARTS_HUD_Base* GetRTS_HUD(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARTS_GameState* GetRTS_GameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARTS_GameMode* GetRTS_GameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRegisteredPickupsInRangeOfPoint(const UObject* WorldContextObject, TArray<AInventoryPickup*>& OutPickups, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRegisteredPickups(const UObject* WorldContextObject, TArray<AInventoryPickup*>& OutPickups);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRegisteredLockersInRangeOfPoint(const UObject* WorldContextObject, TArray<ALocker*>& OutLockers, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending, bool bInOnlyLootable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRegisteredLockersAndPickupsInRangeOfPoint(const UObject* WorldContextObject, TArray<AActor*>& OutItems, FVector InLocation, float InRadius, bool bInSortByDistance, bool bInAscending, bool bInOnlyLootableLockers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRegisteredLockers(const UObject* WorldContextObject, TArray<ALocker*>& OutLockers);
    
    UFUNCTION(BlueprintCallable)
    static APrefabActor* GetPrefabActorForActor(AActor* InActor, bool bTopLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPowerManager* GetPowerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPoolManager* GetPoolManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetPlayerPawns(const UObject* WorldContextObject, bool bIncludeDead, bool bIgnoreEvac);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlatformSaveManager* GetPlatformSaveManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetPawnsByAttitudeInRadius(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TEnumAsByte<ETeamAttitude::Type> TeamAttitude, const FVector& Location, float Radius, bool bAIRegistered, bool bIncludeIncapacitated, bool bUseFeetLocation, bool bIgnoreRequestingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetPawnsByAttitude(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, TEnumAsByte<ETeamAttitude::Type> TeamAttitude, bool bAIRegistered, bool bIncludeIncapacitated, bool bIgnoreRequestingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumberOfFriendlyMarinesInRadius(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreFollowerBots, bool bIgnoreFriendlyMarines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNavigationSystemV1* GetNavigationSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ANavigationData* GetNavigationDataFor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ANavigationData* GetNavigationDataAgentProps(AActor* InActor, FNavAgentProperties Props);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ANavigationData* GetNavigationData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMusicManager* GetMusicManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMonsterManager* GetMonsterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMissionSetupActor* GetMissionSetupActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMissionManagerBase* GetMissionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMediaPlayerActor* GetMediaPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMapSystemManager* GetMapSystemManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULootManager* GetLootManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULocationManager* GetLocationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARTS_PlayerController* GetLocalRTSController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerState* GetLocalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHeroCharacterBase* GetLocalPlayerPawn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetLivingPlayerPawns(const UObject* WorldContextObject, bool bIgnoreEvac);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ELevelType GetLevelType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ALevelSpecificsActor* GetLevelManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASolsticeLevelActorBase* GetLevelActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetHostileOrNeutralPawns(const UObject* WorldContextObject, TScriptInterface<IGenericTeamAgentInterface> RequestingActor, bool bAIRegistered, bool bIncludeIncapacitated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AHeroCharacterBase*> GetFriendlyMarinesInRadius(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AHeroCharacterBase*> GetFriendlyMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetFriendlyBots(const UObject* WorldContextObject, bool bIncludeDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFogOfWarManagerImpr* GetFOWManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFollowerDirector* GetFollowerDirector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetFollowerBots(const UObject* WorldContextObject, bool bIncludeDead);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ADynamicActorBase*> GetDynamicActorsAttachedToPrefab(APrefabActor* InPrefabActor, bool bIncludeChildrenPrefabActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ADynamicActorBase*> GetDynamicActors(const UObject* WorldContextObject, TSubclassOf<ADynamicActorBase> DynamicActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADropshipControllerBase* GetDropshipController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADialogActor* GetDialogActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADestructibleMeshManagerBase* GetDestructibleMeshManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDesignationManager* GetDesignationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AHeroCharacterBase*> GetDeadFriendlyMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreMarineBots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCorsairSubsystem* GetCorsairSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UConnectedMeshManagerBase* GetConnectedMeshSystemManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCivilianManager* GetCivilianManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABurningManager* GetBurningManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetBoundsOfActorByAttachedActors(AActor* InActor, bool bNonColliding, FVector& OutOrigin, FVector& OutExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBodyPartPoolComponent* GetBodyPartPool(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABiomassManager* GetBiomassManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttachedActors(TArray<AActor*>& OutResults, const AActor* InActor, const bool bClearArray, const bool bRecursive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtmosphereController* GetAtmosphereController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APrefabActor*> GetAllTopLevelPrefabs(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllNonMonsterPawns(const UObject* WorldContextObject, TArray<ASolsticeCharacterBase*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AHeroCharacterBase*> GetAllMarinesInRange(const UObject* WorldContextObject, const FVector& Point, float Radius, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnoreEnemyMarines, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreFriendlyMarineBots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AHeroCharacterBase*> GetAllMarines(const UObject* WorldContextObject, TArray<APawn*> PawnsToIgnore, bool bIncludeDead, bool bIgnoreEnemyMarines, bool bIgnorePlayers, bool bIgnorePlayerFollowers, bool bIgnoreFriendlyMarineBots);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ALight*> GetAllAttachedLights(AActor* ParentActor, TArray<FName> ActorTags);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ADoorBase*> GetAllAttachedDoors(AActor* ParentActor, bool bUseActorTags, TArray<FName> ActorTags, bool bUseGameplayTags, FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsWithGameplayTags(const UObject* WorldContextObject, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsWithGameplayTag(const UObject* WorldContextObject, FGameplayTag Tag, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassWithGameplayTags(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassWithGameplayTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTag Tag, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAIDirector* GetAIDirector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* FindClosestPlayerToPlayer(const APawn* InPawn, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* FindClosestPlayer(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* FindClosestMarine(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASolsticeCharacterBase* FindClosestFriendlyMarine(const UObject* WorldContextObject, const FVector& Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreFollowerBots, bool bIgnoreFriendlyMarines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* FindClosestAlivePlayerToPlayer(const APawn* InPawn, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* FindClosestAlivePlayer(const UObject* WorldContextObject, FVector Point, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance);
    
    UFUNCTION(BlueprintCallable)
    static ASolsticeCharacterBase* FindClosestAliveByAttitudePreferredTeam(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance, ESolsticeTeam PreferredTeam);
    
    UFUNCTION(BlueprintCallable)
    static ASolsticeCharacterBase* FindClosestAliveByAttitudeByThreat(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, EEnemyThreatLevel ThreatLevel, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance);
    
    UFUNCTION(BlueprintCallable)
    static ASolsticeCharacterBase* FindClosestAliveByAttitude(ASolsticeCharacterBase* AIChar, const FVector& Vector, TEnumAsByte<ETeamAttitude::Type> Attitude, float& OutDistance, bool bIncludeIncapacitated, bool bSquaredDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIsPlayer(const UObject* WorldContextObject, AActor* ActorToCheck);
    
};

