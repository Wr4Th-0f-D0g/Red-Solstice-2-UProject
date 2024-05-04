#pragma once
#include "CoreMinimal.h"
#include "EMonsterType.h"
#include "GeneratedPeakValue.h"
#include "GeneratedPeak.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedPeak {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Wave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedPeakValue> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WavePointMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonsterType PeakingMonsterType;
    
    TWINSTICK_API FGeneratedPeak();
};

