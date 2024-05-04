#pragma once
#include "CoreMinimal.h"
#include "InfestationDecalData.generated.h"

class ARegion;
class AStrategyInfestationDecal;

USTRUCT(BlueprintType)
struct FInfestationDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AStrategyInfestationDecal> InfestationDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARegion> HomeRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARegion> NeighboringRegion;
    
    TWINSTICK_API FInfestationDecalData();
};

