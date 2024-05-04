#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode.h"
#include "ReplicationGraphNode_AlwaysRelevant.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode* ChildNode;
    
public:
    UReplicationGraphNode_AlwaysRelevant();

};

