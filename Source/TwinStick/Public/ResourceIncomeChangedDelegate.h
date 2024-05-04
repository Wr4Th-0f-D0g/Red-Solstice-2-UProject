#pragma once
#include "CoreMinimal.h"
#include "ResourceIncomeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FResourceIncomeChanged, int32, SupplyIncome, int32, SpecialistIncome, int32, DeploymentIncome);

