#pragma once
#include "CoreMinimal.h"
#include "MarineShoutData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FMarineShoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShoutText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> ShoutAudio;
    
    TWINSTICK_API FMarineShoutData();
};

