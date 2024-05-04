#pragma once
#include "CoreMinimal.h"
#include "SolsticeSession_FindSessionsFinishedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSolsticeSession_FindSessionsFinishedDynamic, bool, bSucceeded, FText, ErrorMessage);

