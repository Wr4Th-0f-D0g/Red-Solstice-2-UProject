#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "ClassStatesRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClassStatesRequested, ESolsticeHeroClass, MarineClass);

