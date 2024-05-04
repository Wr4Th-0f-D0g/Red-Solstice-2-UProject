#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ReplicationGraphDebugActor.generated.h"

class UNetReplicationGraphConnection;
class UReplicationGraph;

UCLASS(Blueprintable, NotPlaceable, Transient)
class REPLICATIONGRAPH_API AReplicationGraphDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraph* ReplicationGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetReplicationGraphConnection* ConnectionManager;
    
    AReplicationGraphDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopDebugging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartDebugging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPeriodFrameForClass(UClass* Class, int32 PeriodFrame);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetConditionalActorBreakpoint(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPrintCullDistances();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPrintAllActorInfo(const FString& Str);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCellInfo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCellInfo(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors);
    
};

