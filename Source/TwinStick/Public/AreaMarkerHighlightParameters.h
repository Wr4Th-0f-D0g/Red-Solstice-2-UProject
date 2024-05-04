#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AreaMarkerHighlightParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TWINSTICK_API FAreaMarkerHighlightParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IgnoreClassFilter;
    
    FAreaMarkerHighlightParameters();
};

