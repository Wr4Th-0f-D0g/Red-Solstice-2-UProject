#pragma once
#include "CoreMinimal.h"
#include "FootstepData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TWINSTICK_API FFootstepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Footstepzone;
    
    FFootstepData();
};

