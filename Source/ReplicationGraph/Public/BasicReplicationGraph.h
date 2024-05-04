#pragma once
#include "CoreMinimal.h"
#include "ConnectionAlwaysRelevantNodePair.h"
#include "ReplicationGraph.h"
#include "BasicReplicationGraph.generated.h"

class AActor;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_GridSpatialization2D;

UCLASS(Blueprintable, NonTransient)
class UBasicReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsWithoutNetConnection;
    
    UBasicReplicationGraph();

};

