#pragma once
#include "CoreMinimal.h"
#include "OnSeatWeaponChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSeatWeaponChanged, AActor*, NewWeapon, AActor*, OldWeapon);

