#pragma once
#include "CoreMinimal.h"
#include "ConnectionAlwaysRelevantNodePair.generated.h"

class UNetConnection;
class UReplicationGraphNode_AlwaysRelevant_ForConnection;

USTRUCT(BlueprintType)
struct FConnectionAlwaysRelevantNodePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* NetConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;
    
    REPLICATIONGRAPH_API FConnectionAlwaysRelevantNodePair();
};

