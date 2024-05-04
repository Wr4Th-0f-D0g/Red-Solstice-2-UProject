#pragma once
#include "CoreMinimal.h"
#include "SuitLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSuitLevelChanged, int32, Level, const FString&, Message);

