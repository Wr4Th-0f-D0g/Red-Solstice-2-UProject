#pragma once
#include "CoreMinimal.h"
#include "LoadedObjectsCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadedObjectsCompleted, const TArray<UObject*>&, LoadedObjects);

