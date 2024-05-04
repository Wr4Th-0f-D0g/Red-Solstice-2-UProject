#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerShout.generated.h"

USTRUCT(BlueprintType)
struct FPlayerShout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShoutTag;
    
    TWINSTICK_API FPlayerShout();
};

