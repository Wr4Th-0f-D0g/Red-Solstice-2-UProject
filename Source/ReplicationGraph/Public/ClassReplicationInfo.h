#pragma once
#include "CoreMinimal.h"
#include "ClassReplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct FClassReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistancePriorityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarvationPriorityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedNetPriorityBias;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ReplicationPeriodFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FastPath_ReplicationPeriodFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ActorChannelFrameTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceSquared;
    
public:
    REPLICATIONGRAPH_API FClassReplicationInfo();
};

