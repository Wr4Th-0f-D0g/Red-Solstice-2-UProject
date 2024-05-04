#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_DormancyNode.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UReplicationGraphNode_DormancyNode();

};

