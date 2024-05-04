#pragma once
#include "CoreMinimal.h"
#include "FootstepSounds.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct TWINSTICK_API FFootstepSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitSoundRun;
    
    FFootstepSounds();
};

