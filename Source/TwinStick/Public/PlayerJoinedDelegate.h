#pragma once
#include "CoreMinimal.h"
#include "PlayerJoinedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerJoined, APlayerState*, Player);

