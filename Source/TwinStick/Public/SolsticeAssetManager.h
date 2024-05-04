#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "SolsticeAssetManager.generated.h"

class UObject;
class UPrefabricatorAsset;
class USolsticeGameData;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API USolsticeAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USolsticeGameData> GameData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> LoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> GameTimeLoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ArmoryTimeLoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UPrefabricatorAsset*> LoadedPrefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrefabricatorAsset>> QueuedPrefabs;
    
public:
    USolsticeAssetManager();

};

