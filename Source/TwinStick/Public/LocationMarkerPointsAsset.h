#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PointsToMarker.h"
#include "LocationMarkerPointsAsset.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ULocationMarkerPointsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointsToMarker> PointsToMarker;
    
    ULocationMarkerPointsAsset();

};

