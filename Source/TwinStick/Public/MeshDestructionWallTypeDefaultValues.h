#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshDestructionWallTypeDefaultValues.generated.h"

USTRUCT(BlueprintType)
struct FMeshDestructionWallTypeDefaultValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeToRemoveObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    TWINSTICK_API FMeshDestructionWallTypeDefaultValues();
};

