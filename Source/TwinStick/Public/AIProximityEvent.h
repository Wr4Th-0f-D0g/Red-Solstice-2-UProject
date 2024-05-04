#pragma once
#include "CoreMinimal.h"
#include "AIProximityEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIProximityEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    TWINSTICK_API FAIProximityEvent();
};

