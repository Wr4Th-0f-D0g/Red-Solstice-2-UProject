#pragma once
#include "CoreMinimal.h"
#include "AIAvoidanceMonsters.generated.h"

USTRUCT(BlueprintType)
struct FAIAvoidanceMonsters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceConeAngle;
    
    TWINSTICK_API FAIAvoidanceMonsters();
};

