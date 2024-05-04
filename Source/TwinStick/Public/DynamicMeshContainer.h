#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DynamicMeshManager.h"
#include "DynamicMeshContainer.generated.h"

class AHeroCharacterBase;

USTRUCT(BlueprintType)
struct TWINSTICK_API FDynamicMeshContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicMeshManager> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> Owner;
    
    FDynamicMeshContainer();
};

