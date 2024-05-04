#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_GridCell.generated.h"

class UReplicationGraphNode;
class UReplicationGraphNode_DormancyNode;

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode* DynamicNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_DormancyNode* DormancyNode;
    
public:
    UReplicationGraphNode_GridCell();

};

