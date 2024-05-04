#pragma once
#include "CoreMinimal.h"
#include "EHunterHunting.h"
#include "HunterRepositionInfo.generated.h"

USTRUCT(BlueprintType)
struct FHunterRepositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHunterHunting> PossibleRepositions;
    
    TWINSTICK_API FHunterRepositionInfo();
};

