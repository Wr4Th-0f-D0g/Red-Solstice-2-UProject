#pragma once
#include "CoreMinimal.h"
#include "SplineNodeMapingStruct.generated.h"

USTRUCT(BlueprintType)
struct FSplineNodeMapingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineCompName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineStartNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineEndNodeName;
    
    TWINSTICK_API FSplineNodeMapingStruct();
};

