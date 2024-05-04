#pragma once
#include "CoreMinimal.h"
#include "SavedReloadState.generated.h"

USTRUCT(BlueprintType)
struct FSavedReloadState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingReloadTime;
    
    TWINSTICK_API FSavedReloadState();
};

