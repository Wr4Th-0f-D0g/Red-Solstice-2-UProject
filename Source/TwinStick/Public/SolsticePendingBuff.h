#pragma once
#include "CoreMinimal.h"
#include "SolsticePendingBuff.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FSolsticePendingBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* PendingBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfStacks;
    
    TWINSTICK_API FSolsticePendingBuff();
};

