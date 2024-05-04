#pragma once
#include "CoreMinimal.h"
#include "TargetPackage.h"
#include "TargetPackageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetPackageChanged, FTargetPackage, TargetPackage);

