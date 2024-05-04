#pragma once
#include "CoreMinimal.h"
#include "AlwaysRelevantActorInfo.generated.h"

class AActor;
class UNetConnection;

USTRUCT(BlueprintType)
struct FAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewTarget;
    
    REPLICATIONGRAPH_API FAlwaysRelevantActorInfo();
};

