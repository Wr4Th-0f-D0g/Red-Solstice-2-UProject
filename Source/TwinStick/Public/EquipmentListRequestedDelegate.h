#pragma once
#include "CoreMinimal.h"
#include "EEquipementPanel.h"
#include "EquipmentListRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipmentListRequested, EEquipementPanel, EquipmentPanel);

