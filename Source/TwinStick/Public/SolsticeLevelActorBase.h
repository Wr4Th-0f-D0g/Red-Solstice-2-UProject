#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ELevelType.h"
#include "SolsticeLevelActorBase.generated.h"

class AAtmosphereController;
class ABiomassManager;
class ABurningManager;
class ADestructibleMeshManagerBase;
class AFogOfWarManagerImpr;
class AGroupPlayerStartBase;
class AISM_ConverterActor;
class ALevelSpecificsActor;
class AMapSystemManager;
class AMissionManagerBase;
class ANavigationData;
class ARTS_NetworkManager;
class USolsticePrefabData;
class UStrategyMapDefinitions;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeLevelActorBase : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizedRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeInPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRopeDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSpecificsActor* LevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtmosphereController* AtmosphereController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFogOfWarManagerImpr* FOWManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADestructibleMeshManagerBase* DestructibleMeshManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AISM_ConverterActor* ISM_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABurningManager* BurningManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomassManager* BiomassManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionManagerBase* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapSystemManager* MapSystemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARTS_NetworkManager*> NetworkManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStrategyMapDefinitions* StrategyMapDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticePrefabData* PrefabData;
    
    ASolsticeLevelActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProceduralLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatLayerLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleNavigationGenerationFinished(ANavigationData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGroupPlayerStartBase* GetGroupStart() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckToChangeNavmeshFullAsync();
    
};

