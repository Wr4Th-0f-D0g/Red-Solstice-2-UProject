#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleDifferential4W.h"
#include "DcxVehicleDifferentialData4W.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleDifferentialData4W {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDcxVehicleDifferential4W::Type> DifferentialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontRearSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontLeftRightSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearLeftRightSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearBias;
    
    FDcxVehicleDifferentialData4W();
};

