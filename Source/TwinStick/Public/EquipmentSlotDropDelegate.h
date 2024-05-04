#pragma once
#include "CoreMinimal.h"
#include "EquipmentSlotDropDelegate.generated.h"

class UEquipmentPayload;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentSlotDrop, int32, SlotIndex, UEquipmentPayload*, Payload);

