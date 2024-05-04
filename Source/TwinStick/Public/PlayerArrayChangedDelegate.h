#pragma once
#include "CoreMinimal.h"
#include "PlayerArrayChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerArrayChanged, const TArray<APlayerState*>&, PlayerStates);

