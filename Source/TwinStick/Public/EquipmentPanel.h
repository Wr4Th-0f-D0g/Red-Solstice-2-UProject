#pragma once
#include "CoreMinimal.h"
#include "EEquipementPanel.h"
#include "EquipmentPanel.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipementPanel PanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slots;
    
    TWINSTICK_API FEquipmentPanel();
};

