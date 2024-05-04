#pragma once
#include "CoreMinimal.h"
#include "BiomassExplosionDamageData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FBiomassExplosionDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoDamageToBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageFalloutCurve;
    
    TWINSTICK_API FBiomassExplosionDamageData();
};

