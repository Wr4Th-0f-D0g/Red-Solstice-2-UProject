#pragma once
#include "CoreMinimal.h"
#include "LoadedClassesCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadedClassesCompleted, const TArray<UClass*>&, LoadedClasses);

