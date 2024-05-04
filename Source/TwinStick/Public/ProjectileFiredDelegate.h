#pragma once
#include "CoreMinimal.h"
#include "ProjectileFiredDelegate.generated.h"

class UFireComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileFired, UFireComponentBase*, FiringComponent);

