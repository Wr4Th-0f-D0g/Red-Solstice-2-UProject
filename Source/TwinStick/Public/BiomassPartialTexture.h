#pragma once
#include "CoreMinimal.h"
#include "BiomassPartialTexture.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FBiomassPartialTexture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultBlurCurve;
    
public:
    TWINSTICK_API FBiomassPartialTexture();
};

