#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WallBurningPoint.generated.h"

USTRUCT(BlueprintType)
struct FWallBurningPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    TWINSTICK_API FWallBurningPoint();
};

