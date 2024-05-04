#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "ReplicationGraphNode_ActorList.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_ActorList : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UReplicationGraphNode_ActorList();

};

