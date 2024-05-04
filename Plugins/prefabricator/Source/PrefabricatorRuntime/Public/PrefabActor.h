#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "PrefabActor.generated.h"

class APrefabRandomizer;
class UPrefabComponent;
class UPrefabricatorAsset;
class UPrefabricatorAssetInterface;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabComponent* PrefabComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrefabTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAsset> PrefabricatorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LastUpdateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PrefabNullModifier;
    
    APrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPrefab(UPrefabricatorAssetInterface* NewPrefab);
    
    UFUNCTION(BlueprintCallable)
    void SavePrefab();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeSeed(const FRandomStream& InRandom, bool bRecursive);
    
    UFUNCTION(BlueprintCallable)
    void LoadPrefab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrefabOutdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrefabricatorAsset* GetPrefabAsset(APrefabRandomizer* InRandomizer, TSubclassOf<AActor>& OutModClass);
    
};

