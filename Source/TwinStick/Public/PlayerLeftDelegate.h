#pragma once
#include "CoreMinimal.h"
#include "PlayerLeftDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLeft, APlayerState*, Player);

