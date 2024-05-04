#pragma once
#include "CoreMinimal.h"
#include "DcxDrivableSurfaceToTireFrictionPair.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxDrivableSurfaceToTireFrictionPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* SurfaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    FDcxDrivableSurfaceToTireFrictionPair();
};

