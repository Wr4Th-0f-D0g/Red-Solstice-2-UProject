#pragma once
#include "CoreMinimal.h"
#include "SwapWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FSwapWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecondaryActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSwapTime;
    
    TWINSTICK_API FSwapWeaponData();
};

