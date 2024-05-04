#include "ReplicationGraphDebugActor.h"

AReplicationGraphDebugActor::AReplicationGraphDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ReplicationGraph = NULL;
    this->ConnectionManager = NULL;
}

void AReplicationGraphDebugActor::ServerStopDebugging_Implementation() {
}

void AReplicationGraphDebugActor::ServerStartDebugging_Implementation() {
}

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass_Implementation(UClass* Class, int32 PeriodFrame) {
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass_Implementation(UClass* Class, float CullDistance) {
}

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint_Implementation(AActor* Actor) {
}

void AReplicationGraphDebugActor::ServerPrintCullDistances_Implementation() {
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo_Implementation(const FString& Str) {
}

void AReplicationGraphDebugActor::ServerCellInfo_Implementation() {
}

void AReplicationGraphDebugActor::ClientCellInfo_Implementation(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors) {
}


