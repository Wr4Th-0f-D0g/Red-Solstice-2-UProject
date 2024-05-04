#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESolsticeVehicleModuleCategory.h"
#include "Templates/SubclassOf.h"
#include "VehicleModListGroupBase.generated.h"

class UVehicleModListButtonBase;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UVehicleModListGroupBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVehicleModListButtonBase> ModButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeVehicleModuleCategory ModuleCategory;
    
    UVehicleModListGroupBase();

};

