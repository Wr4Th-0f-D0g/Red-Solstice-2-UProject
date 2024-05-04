#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EExperienceRewardType.h"
#include "EStrategyMissionResult.h"
#include "LoadingScreenNavmeshTilesRebuildDelegate.h"
#include "MinimapLeaderPointsDelegate.h"
#include "MinimapPingLocationDelDelegate.h"
#include "SolsticeGameState.h"
#include "SystemMessageDelegate.h"
#include "Templates/SubclassOf.h"
#include "RTS_GameState.generated.h"

class AActor;
class AAtmosphereController;
class ABiomassBase;
class ADropshipControllerBase;
class ALevelSpecificsActor;
class APrefabActor;
class UExperienceAwardComponent;
class UHealthComponent;
class UObject;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API ARTS_GameState : public ASolsticeGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStrategyMissionResult MissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersEvacuated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemMessage OnSystemMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenNavmeshTilesRebuild UpdateLoadingscreenNavmeshGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExperienceAwardComponent* ExperienceComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalNumberPrefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> AlwaysPreloadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AlwaysPreloadedObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSpecificsActor* LevelSpecificsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtmosphereController* AtmosphereController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABiomassBase* Biomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADropshipControllerBase* DropshipController;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapLeaderPoints OnLeaderPointsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapPingLocationDel OnMinimapPingLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimapPingLocation, meta=(AllowPrivateAccess=true))
    FVector2D MinimapPingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LeaderMapPoints, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> LeaderMapPoints;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* CondatisTrainHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USolsticeBuffBase>, int32> GlobalTeamBuffMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> MatchRequisitionBonuses;
    
    ARTS_GameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterTrainHealthComponent(UHealthComponent* NewTrainHealthComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MinimapPingLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LeaderMapPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleRandomizerDone();
    
    UFUNCTION(BlueprintCallable)
    void HandleRandomizationCompleted(APrefabActor* Prefab);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSpecificsActor* GetLevelSpecificsActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameRandomSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UExperienceAwardComponent* GetExperienceAwardComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADropshipControllerBase* GetDropshipController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABiomassBase* GetBiomassBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAtmosphereController* GetAtmosphereController() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FindLevelSpecificsActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void AwardExperience(float Experience, EExperienceRewardType ExperienceSource, FVector Location, AActor* Awardee, float Range);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalTeamBuff(TSubclassOf<USolsticeBuffBase> NewBuffClass, int32 NewBuffStacks);
    
};

