#pragma once
#include "CoreMinimal.h"
#include "PerceivedActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPerceivedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PerceivedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriendly;
    
    TWINSTICK_API FPerceivedActor();
};

