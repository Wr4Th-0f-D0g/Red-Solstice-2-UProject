#pragma once
#include "CoreMinimal.h"
#include "EFiringMode.h"
#include "FiringMode.generated.h"

USTRUCT(BlueprintType)
struct FFiringMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecondaryWeaponActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringMode FiringMode;
    
    TWINSTICK_API FFiringMode();
};

