#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LastLocationGatherInfo.generated.h"

class UNetConnection;

USTRUCT(BlueprintType)
struct FLastLocationGatherInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastOutOfRangeLocationCheck;
    
    REPLICATIONGRAPH_API FLastLocationGatherInfo();
};

