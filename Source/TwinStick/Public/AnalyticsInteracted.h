#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnalyticsInteracted.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsInteracted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InteractedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    TWINSTICK_API FAnalyticsInteracted();
};

