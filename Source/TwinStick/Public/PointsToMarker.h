#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointsToMarker.generated.h"

class ALocationMarkerBase;

USTRUCT(BlueprintType)
struct FPointsToMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALocationMarkerBase> Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    TWINSTICK_API FPointsToMarker();
};

