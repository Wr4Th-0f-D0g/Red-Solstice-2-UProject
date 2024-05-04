#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PrefabComponent.generated.h"

class UPrefabricatorAsset;
class UPrefabricatorAssetCollection;
class UPrefabricatorAssetInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PREFABRICATORRUNTIME_API UPrefabComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideStaticCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticCollectionOverrideValue;
    
    UPrefabComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadAsset(TSoftObjectPtr<UPrefabricatorAsset> Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForcedStaticCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPrefabricatorAssetCollection> GetPrefabCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrefabricatorAssetInterface* GetPrefabAssetInterface() const;
    
};

