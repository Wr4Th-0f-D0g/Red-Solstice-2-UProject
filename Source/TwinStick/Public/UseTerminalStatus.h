#pragma once
#include "CoreMinimal.h"
#include "UseTerminalStatus.generated.h"

class APowerConsumer;

USTRUCT(BlueprintType)
struct FUseTerminalStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivatedItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APowerConsumer* LastActivatedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> ActivatedItems;
    
    TWINSTICK_API FUseTerminalStatus();
};

