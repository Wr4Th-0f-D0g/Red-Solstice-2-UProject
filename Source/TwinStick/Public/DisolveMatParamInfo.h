#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDisolveMatParamType.h"
#include "DisolveMatParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FDisolveMatParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisolveMatParamType MaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VecValue;
    
    TWINSTICK_API FDisolveMatParamInfo();
};

