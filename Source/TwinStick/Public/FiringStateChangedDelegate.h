#pragma once
#include "CoreMinimal.h"
#include "EFiringState.h"
#include "FiringStateChangedDelegate.generated.h"

class UFireComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFiringStateChanged, UFireComponentBase*, FiringComponent, EFiringState, OldFiringState, EFiringState, NewFiringState);

