#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EEquipementPanel.h"
#include "EquipmentSlotButton.generated.h"

class UEquipmentGrid;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEquipmentSlotButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipementPanel PanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentGrid* EquipmentPanel;
    
    UEquipmentSlotButton();

};

