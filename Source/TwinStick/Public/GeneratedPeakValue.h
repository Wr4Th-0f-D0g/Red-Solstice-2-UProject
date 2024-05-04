#pragma once
#include "CoreMinimal.h"
#include "EMonsterType.h"
#include "GeneratedPeakValue.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedPeakValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonsterType MonsterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TWINSTICK_API FGeneratedPeakValue();
};

