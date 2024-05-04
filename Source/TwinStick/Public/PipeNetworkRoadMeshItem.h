#pragma once
#include "CoreMinimal.h"
#include "PipeNetworkRoadMeshItem.generated.h"

class AStaticMeshActor;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FPipeNetworkRoadMeshItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* RoadActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    TWINSTICK_API FPipeNetworkRoadMeshItem();
};

