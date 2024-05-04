#pragma once
#include "CoreMinimal.h"
#include "CharacterEquipment.h"
#include "EEquipAction.h"
#include "EEquipementPanel.h"
#include "EquipmentActionRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEquipmentActionRequested, FCharacterEquipment, EquipmentInfo, EEquipementPanel, EqipmentPanel, EEquipAction, EquipAction);

