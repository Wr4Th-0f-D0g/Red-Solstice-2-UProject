#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnalyticsMonsterSpawnItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsMonsterSpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    TWINSTICK_API FAnalyticsMonsterSpawnItem();
};

