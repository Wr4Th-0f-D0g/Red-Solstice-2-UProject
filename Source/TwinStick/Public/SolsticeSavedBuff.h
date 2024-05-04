#pragma once
#include "CoreMinimal.h"
#include "EBuffDuration.h"
#include "Templates/SubclassOf.h"
#include "SolsticeSavedBuff.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FSolsticeSavedBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EBuffDuration DurationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RemainingDuration;
    
    TWINSTICK_API FSolsticeSavedBuff();
};

