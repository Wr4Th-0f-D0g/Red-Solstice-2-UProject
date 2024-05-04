#pragma once
#include "CoreMinimal.h"
#include "EquipmentSlotDraggedOverChangedDelegate.generated.h"

class UEquipmentPayload;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEquipmentSlotDraggedOverChanged, int32, SlotIndex, UEquipmentPayload*, Payload, bool, IsDraggedOver);

