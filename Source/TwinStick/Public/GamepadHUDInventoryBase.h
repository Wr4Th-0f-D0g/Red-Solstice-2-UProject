#pragma once
#include "CoreMinimal.h"
#include "GamepadCombatActivatableWidget.h"
#include "GamepadHUDInventoryBase.generated.h"

class UCommonActionWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadHUDInventoryBase : public UGamepadCombatActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonActionWidget*> InventorySelectionIcons;
    
    UGamepadHUDInventoryBase();

    UFUNCTION(BlueprintCallable)
    void RegisterInventorySelectionIcons(TArray<UCommonActionWidget*> NewInventorySelectionIcons);
    
};

