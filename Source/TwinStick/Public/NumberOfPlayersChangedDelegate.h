#pragma once
#include "CoreMinimal.h"
#include "NumberOfPlayersChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNumberOfPlayersChanged, int32, NumPlayers);

