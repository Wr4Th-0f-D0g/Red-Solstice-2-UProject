#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryPickupAction.generated.h"

class AHeroCharacterBase;
class AInventoryPickup;
class UInventoryComponent;

UCLASS(Blueprintable)
class UInventoryPickupAction : public UObject {
    GENERATED_BODY()
public:
    UInventoryPickupAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemPickedUp(AInventoryPickup* Item, UInventoryComponent* Inventory, AHeroCharacterBase* Hero);
    
};

