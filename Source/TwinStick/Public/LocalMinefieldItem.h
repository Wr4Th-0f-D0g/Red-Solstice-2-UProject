#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocalMinefieldItem.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FLocalMinefieldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MyGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MineStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MineMaterialInstance;
    
    TWINSTICK_API FLocalMinefieldItem();
};

