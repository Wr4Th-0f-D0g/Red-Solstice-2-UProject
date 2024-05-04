#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabRandomizerCompleteBindableEventDelegate.h"
#include "PrefabricatorAssetCollectionItem.h"
#include "PrefabRandomizer.generated.h"

class AStaticMeshActor;
class UPrefabricatorAsset;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabRandomizer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeedOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBuildTimePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPrefabricatorAssetCollectionItem> AlreadySpawnedPrefabs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefabRandomizerCompleteBindableEvent OnRandomizationComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastSyncBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* StaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrefabricatorAsset>> SpawnedPrefabAssets;
    
    APrefabRandomizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Randomize(int32 InSeed);
    
};

