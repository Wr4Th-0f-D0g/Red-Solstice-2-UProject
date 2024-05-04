#pragma once
#include "CoreMinimal.h"
#include "PickedUpDelegate.generated.h"

class AHeroCharacterBase;
class AInventoryPickup;
class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPickedUp, AHeroCharacterBase*, Hero, AInventoryPickup*, PickupItem, UItem*, InventoryItem);

