#pragma once
#include "CoreMinimal.h"
#include "Engine/ReplicationDriver.h"
#include "Templates/SubclassOf.h"
#include "ReplicationGraph.generated.h"

class UNetDriver;
class UNetReplicationGraphConnection;
class UReplicationGraphNode;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class REPLICATIONGRAPH_API UReplicationGraph : public UReplicationDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNetReplicationGraphConnection> ReplicationConnectionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetReplicationGraphConnection*> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetReplicationGraphConnection*> PendingConnections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode*> GlobalGraphNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode*> PrepareForReplicationNodes;
    
public:
    UReplicationGraph();

};

