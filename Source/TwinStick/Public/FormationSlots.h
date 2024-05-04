#pragma once
#include "CoreMinimal.h"
#include "FormationSlots.generated.h"

class AHeroCharacterBase;
class UArrowComponent;

USTRUCT(BlueprintType)
struct FFormationSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionFollowerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> Occupier;
    
    TWINSTICK_API FFormationSlots();
};

