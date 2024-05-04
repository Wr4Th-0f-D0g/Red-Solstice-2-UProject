#pragma once
#include "CoreMinimal.h"
#include "Engine/ReplicationDriver.h"
#include "LastLocationGatherInfo.h"
#include "NetReplicationGraphConnection.generated.h"

class AReplicationGraphDebugActor;
class UNetConnection;
class UReplicationGraphNode;
class UReplicationGraphNode_TearOff_ForConnection;

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UNetReplicationGraphConnection : public UReplicationConnectionDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* NetConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplicationGraphDebugActor* DebugActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLastLocationGatherInfo> LastGatherLocations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode*> ConnectionGraphNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_TearOff_ForConnection* TearOffNode;
    
public:
    UNetReplicationGraphConnection();

};

