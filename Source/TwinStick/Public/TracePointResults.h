#pragma once
#include "CoreMinimal.h"
#include "TracePointResults.generated.h"

USTRUCT(BlueprintType)
struct FTracePointResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PointDepths;
    
    TWINSTICK_API FTracePointResults();
};

