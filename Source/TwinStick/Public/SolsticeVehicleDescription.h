#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SolsticeVehicleDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSolsticeVehicleDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VehicleIcon;
    
    TWINSTICK_API FSolsticeVehicleDescription();
};

