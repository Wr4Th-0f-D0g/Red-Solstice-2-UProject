#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EKillEnemiesFilter.h"
#include "KillEnemyTaskKilledDelegate.h"
#include "MissionTaskBase.h"
#include "Templates/SubclassOf.h"
#include "KillEnemiesTask.generated.h"

class ASolsticeCharacterBase;
class UKillEnemiesTask;
class UMissionObjectiveTracker;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UKillEnemiesTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKillEnemyTaskKilled OnKillEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillEnemiesFilter EnemyFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionObjectiveTracker> TrackerClass;
    
    UKillEnemiesTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKillEnemiesTask* StartKillEnemiesTask(UObject* WorldContextObject, int32 NumberOfEnemies, EKillEnemiesFilter Filter, FGameplayTagContainer EnemyFilterTags, TSubclassOf<UMissionObjectiveTracker> ObjectiveTrackerLClass);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnKilled(ASolsticeCharacterBase* KilledPawn, const FGameplayTagContainer& PawnTags, const FDamage& DamageInfo);
    
};

