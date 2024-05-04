#pragma once
#include "CoreMinimal.h"
#include "StateObjectSounds.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FStateObjectSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnEnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ActiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnExitSound;
    
    TWINSTICK_API FStateObjectSounds();
};

