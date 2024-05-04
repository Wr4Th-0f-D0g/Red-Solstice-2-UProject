#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserPrivilegeResult.generated.h"

UENUM(BlueprintType)
enum class ESolsticeUserPrivilegeResult : uint8 {
    Unknown,
    Available,
    UserNotLoggedIn,
    LicenseInvalid,
    VersionOutdated,
    NetworkConnectionUnavailable,
    AgeRestricted,
    AccountTypeRestricted,
    AccountUseRestricted,
    PlatformFailure,
};

