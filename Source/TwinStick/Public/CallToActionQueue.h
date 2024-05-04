#pragma once
#include "CoreMinimal.h"
#include "CallToActionParameters.h"
#include "CallToActionQueue.generated.h"

USTRUCT(BlueprintType)
struct FCallToActionQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCallToActionParameters> CallToActionQueue;
    
    TWINSTICK_API FCallToActionQueue();
};

