#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PrefabricatorAssetCollectionItem.h"
#include "PrefabricatorAssetInterface.h"
#include "Templates/SubclassOf.h"
#include "PrefabricatorAssetCollection.generated.h"

class AActor;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabricatorAssetCollectionItem> Prefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShapeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoLoadPrefabInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PrefabNullModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> NetworkManager;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPrefabricatorAssetCollection();

};

