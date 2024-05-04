#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_ConnectionDormancyNode.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UReplicationGraphNode_ConnectionDormancyNode();

};

