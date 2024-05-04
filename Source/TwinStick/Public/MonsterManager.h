#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PerPlatformProperties.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "InternalDoors.h"
#include "LocationInfo.h"
#include "Templates/SubclassOf.h"
#include "MonsterManager.generated.h"

class AActor;
class ADoorBase;
class AMonsterCharacterBase;
class AMonsterControllerBase;
class ANestBase;
class APowerConsumer;
class UAIAvoidanceManager;
class ULocationManager;
class UNavArea;
class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMonsterManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNavRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> BuildingNavModifierClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> BuildingsWithWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> BuildingLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnHunters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHunters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt NumHunters_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMonsterCharacterBase> HunterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreeperSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCreeperInsideBuildingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnCreepers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCreepers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt NumberOfCreepers_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMonsterCharacterBase> CreeperClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBuildingMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGroupDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBuildingMonstersToSpawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt NumBuildingMonstersToSpawn_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableIndoorMapCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBuildingAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBuildingAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxBuildingAmount_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMonstersPerBuilding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinMonstersPerBuilding_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMonstersPerBuilding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxMonstersPerBuilding_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingMonsterSpawnDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat BuildingMonsterSpawnDelay_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RadiusToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildingMonsterCollisionBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCollisionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuildingMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> MonsterSpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> CachedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInternalDoors> InternalDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAvoidanceManager* AvoidanceManager;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ANestBase>> Nests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAIDebugs;
    
public:
    UMonsterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnMonstersOnLocationByTags(TArray<FName> InTags);
    
    UFUNCTION(BlueprintCallable)
    void SpawnMonsterNextTick(const FGameplayTag MonsterTag, FTransform MonsterTransform, bool bUseWaveData);
    
    UFUNCTION(BlueprintCallable)
    void SpawnHunters(int32 InNumHunters);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCreepers(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBuildingMonsters(ULocationManager* InLocManager);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPack(AMonsterControllerBase* LeaderController, AMonsterControllerBase* MonsterToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnLocationsMapped(ULocationManager* LocManager);
    
    UFUNCTION(BlueprintCallable)
    void MapBuildingsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIAvoidanceManager* K2_GetAvoidanceManager() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetInsideBuilding(AActor* TestActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsLeaderClose(AMonsterCharacterBase* MonsterA, AMonsterCharacterBase* MonsterB, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InternalDoorUnOccupied(ADoorBase* Door) const;
    
    UFUNCTION(BlueprintCallable)
    void InternalDoorSetOccupied(ADoorBase* Door, AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable)
    void InternalDoorRemoveOccupied(ADoorBase* Door, AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable)
    TArray<ADoorBase*> GetUnoccupiedInternalDoors(AMonsterCharacterBase* RequestingMonster, float DoorHealthRequired, bool bCheckPlayer, float Distance);
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetPosition(AMonsterControllerBase* AIController, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowAIDebugs() const;
    
    UFUNCTION(BlueprintCallable)
    ANestBase* GetNearestNest(AMonsterCharacterBase* Monster, TSubclassOf<UNavigationQueryFilter> QueryFilter, bool bCheckOccupied, bool bPathTest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, TSoftClassPtr<AMonsterCharacterBase>> GetMonsterStringAndClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMonsterFloorPos();
    
    UFUNCTION(BlueprintCallable)
    TArray<APowerConsumer*> GetInactiveLightTerminals();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLocationInfo> GetBuildingsWithWindows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterCharacterBase*> GetAllBurrowers() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<APowerConsumer*> GetActiveLightTerminals();
    
    UFUNCTION(BlueprintCallable)
    bool FindPackLeader(AMonsterCharacterBase* SelfMonster, int32 MaxMembers, AMonsterCharacterBase*& OutPackLeader, int32& OutPackMembers, float MaxLeaderDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterCharacterBase* FindMonsterByController(AMonsterControllerBase* InController) const;
    
    UFUNCTION(BlueprintCallable)
    void CreatePack(AMonsterCharacterBase* PackLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNavigateToEQSLoc(FVector OldLoc, FVector NewLoc, float DeniedDistance);
    
    UFUNCTION(BlueprintCallable)
    void AddToCreatedPack(AMonsterCharacterBase* PackMember, AMonsterCharacterBase* Leader);
    
};

