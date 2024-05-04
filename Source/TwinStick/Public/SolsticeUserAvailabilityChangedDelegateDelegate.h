#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserAvailability.h"
#include "ESolsticeUserPrivilege.h"
#include "SolsticeUserAvailabilityChangedDelegateDelegate.generated.h"

class USolsticeUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSolsticeUserAvailabilityChangedDelegate, const USolsticeUserInfo*, UserInfo, ESolsticeUserPrivilege, Privilege, ESolsticeUserAvailability, OldAvailability, ESolsticeUserAvailability, NewAvailability);

