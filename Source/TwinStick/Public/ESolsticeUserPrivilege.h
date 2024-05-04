#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserPrivilege.generated.h"

UENUM(BlueprintType)
enum class ESolsticeUserPrivilege : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateViaTextOnline,
    CanCommunicateViaVoiceOnline,
    CanUseUserGeneratedContent,
    CanUseCrossPlay,
    Invalid_Count,
};

