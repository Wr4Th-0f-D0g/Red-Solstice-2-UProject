#include "ReplicationGraph.h"
#include "NetReplicationGraphConnection.h"

UReplicationGraph::UReplicationGraph() {
    this->ReplicationConnectionManagerClass = UNetReplicationGraphConnection::StaticClass();
    this->NetDriver = NULL;
}


