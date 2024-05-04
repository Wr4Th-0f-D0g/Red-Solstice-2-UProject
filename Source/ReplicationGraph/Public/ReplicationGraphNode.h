#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplicationGraphNode.generated.h"

class UReplicationGraphNode;

UCLASS(Abstract, Blueprintable, Transient)
class REPLICATIONGRAPH_API UReplicationGraphNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode*> AllChildNodes;
    
public:
    UReplicationGraphNode();

};

