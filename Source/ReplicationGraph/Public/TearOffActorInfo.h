#pragma once
#include "CoreMinimal.h"
#include "TearOffActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTearOffActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    REPLICATIONGRAPH_API FTearOffActorInfo();
};

