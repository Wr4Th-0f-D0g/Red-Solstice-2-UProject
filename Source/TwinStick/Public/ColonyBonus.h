#pragma once
#include "CoreMinimal.h"
#include "EColonyBonusType.h"
#include "Templates/SubclassOf.h"
#include "ColonyBonus.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FColonyBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColonyBonusType BonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BuffClass;
    
    TWINSTICK_API FColonyBonus();
};

