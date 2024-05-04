#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_DynamicSpatialFrequency.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UReplicationGraphNode_DynamicSpatialFrequency();

};

