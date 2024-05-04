#pragma once
#include "CoreMinimal.h"
#include "AlwaysRelevantActorInfo.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UReplicationGraphNode_AlwaysRelevant_ForConnection();

};

