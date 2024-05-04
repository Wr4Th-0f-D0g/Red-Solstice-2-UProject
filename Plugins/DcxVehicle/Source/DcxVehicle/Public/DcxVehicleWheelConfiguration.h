#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DcxVehicleSuspensionData.h"
#include "DcxVehicleWheelData.h"
#include "EDcxVehicleWheelSweep.h"
#include "DcxVehicleWheelConfiguration.generated.h"

class UDcxVehicleTire;
class UStaticMesh;

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleWheelConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePresetShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleWheelData WheelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleSuspensionData SuspensionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDcxVehicleTire* Tire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDcxVehicleWheelSweep::Type> SweepType;
    
    FDcxVehicleWheelConfiguration();
};

