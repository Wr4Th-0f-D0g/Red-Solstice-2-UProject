#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InstantHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FInstantHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReticleSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftSide;
    
    TWINSTICK_API FInstantHitInfo();
};

