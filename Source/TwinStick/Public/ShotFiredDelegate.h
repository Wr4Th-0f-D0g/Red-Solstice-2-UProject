#pragma once
#include "CoreMinimal.h"
#include "ShotFiredDelegate.generated.h"

class UFireComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShotFired, UFireComponentBase*, FiringComponent);

