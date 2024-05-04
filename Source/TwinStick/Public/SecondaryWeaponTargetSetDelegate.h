#pragma once
#include "CoreMinimal.h"
#include "SecondaryWeaponTargetSetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSecondaryWeaponTargetSet, AActor*, Target);

