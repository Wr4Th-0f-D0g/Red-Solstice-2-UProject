#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExplosionDecal.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FExplosionDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    TWINSTICK_API FExplosionDecal();
};

