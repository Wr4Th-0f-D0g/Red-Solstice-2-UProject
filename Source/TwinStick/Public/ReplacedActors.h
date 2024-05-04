#pragma once
#include "CoreMinimal.h"
#include "ReplacedActorInfo.h"
#include "ReplacedActors.generated.h"

USTRUCT(BlueprintType)
struct FReplacedActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplacedActorInfo> ReplacedActors;
    
    TWINSTICK_API FReplacedActors();
};

