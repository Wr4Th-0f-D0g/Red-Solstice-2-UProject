#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SolsticeVehicleModuleDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSolsticeVehicleModuleDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModuleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ModuleIcon;
    
    TWINSTICK_API FSolsticeVehicleModuleDescription();
};

