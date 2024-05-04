#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "ESuitTier.h"
#include "PowerSuitModel.generated.h"

USTRUCT(BlueprintType)
struct FPowerSuitModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass MarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESuitTier SuitTier;
    
    TWINSTICK_API FPowerSuitModel();
};

