#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EEnemyThreatLevel.h"
#include "EnemiesAmbushRow.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "AmbushTask.generated.h"

class ASolsticeCharacterBase;
class UAmbushTask;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UAmbushTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveUpdated, const TArray<ASolsticeCharacterBase*>&, Enemies);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedSpawnTagsForEnemyGenerator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedWaveAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyThreatLevel CachedThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedAdditionalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> SpawnedEnemies;
    
public:
    UAmbushTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAmbushTask* StartAmbushDeployment(UObject* WorldContextObject, FMissionLocation Location, int32 WaveAdjustment, float AdditionalPoints, EEnemyThreatLevel ThreatLevel, FGameplayTagContainer SpawnTagsForEnemyGenerator, int32 MaxAmountToSpawn, float TimeBetweenSpawns, bool bIgnoreClosest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAmbushTask* StartAmbush(UObject* WorldContextObject, FMissionLocation Location, TArray<FEnemiesAmbushRow> Enemies, float TimeBetweenSpawns, bool bIgnoreClosest);
    
};

