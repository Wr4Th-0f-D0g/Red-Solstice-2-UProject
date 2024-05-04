#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnalyticsPickupSpawn.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsPickupSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Pickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    TWINSTICK_API FAnalyticsPickupSpawn();
};

