#pragma once
#include "CoreMinimal.h"
#include "MeshCentersArray.generated.h"

class AMeshSystemCenterBase;

USTRUCT(BlueprintType)
struct FMeshCentersArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemCenterBase*> MeshCenterActors;
    
    TWINSTICK_API FMeshCentersArray();
};

