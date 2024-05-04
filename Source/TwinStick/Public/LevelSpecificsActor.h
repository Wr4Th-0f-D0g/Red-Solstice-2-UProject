#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FMODEventInstance.h"
#include "BlockDecisionMonsterData.h"
#include "BlockDecisionMonsterDataElement.h"
#include "MapBuildingsReadyDelegate.h"
#include "LevelSpecificsActor.generated.h"

class AAtmosphereController;
class ADropshipControllerBase;
class ALevelSequenceActor;
class AMissionSetupActor;
class UAIDirector;
class UBodyPartPoolComponent;
class UCivilianManager;
class UConnectedMeshManagerBase;
class UDesignationManager;
class UFMODEvent;
class UFollowerDirector;
class ULocationManager;
class ULootManager;
class UMonsterManager;
class UMovableVehicleManager;
class UPowerManager;
class USpawnManager;
class UTeamInstigatorManager;

UCLASS(Blueprintable)
class TWINSTICK_API ALevelSpecificsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBuildingsReady OnMapBuildingsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIDirector* AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocationManager* LocationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerManager* PowerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCivilianManager* CivilianManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULootManager* LootManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMonsterManager* MonsterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowerDirector* FollowerDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDesignationManager* DesignationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConnectedMeshManagerBase* ConnectedMeshManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockDecisionMonsterData BlockDecisionMonsterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODEvent*> AmbientSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> AmbientSoundInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtmosphereController* AtmosphereController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADropshipControllerBase* DropshipController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovableVehicleManager* VehicleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamInstigatorManager* TeamInstigatorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBodyPartPoolComponent* BodyPartPool;
    
public:
    ALevelSpecificsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLootSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionSetupActorSet(AMissionSetupActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleSequenceComplete(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleLocationsMapped(ULocationManager* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovableVehicleManager* GetVehicleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTeamInstigatorManager* GetTeamInstigatorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnManager* GetSpawnManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPowerManager* GetPowerManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMonsterManager* GetMonsterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULootManager* GetLootManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocationManager* GetLocationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFollowerDirector* GetFollowerDirector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADropshipControllerBase* GetDropshipControllerBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDesignationManager* GetDesignationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConnectedMeshManagerBase* GetConnectedMeshSystemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCivilianManager* GetCivilianManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBodyPartPoolComponent* GetBodyPartPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlockDecisionMonsterDataElement GetBlockMonsterDataElementForLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAtmosphereController* GetAtmosphereController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIDirector* GetAIDirector() const;
    
};

