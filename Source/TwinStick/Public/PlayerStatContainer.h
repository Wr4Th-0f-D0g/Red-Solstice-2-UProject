#pragma once
#include "CoreMinimal.h"
#include "PlayerStat.h"
#include "PlayerStatContainer.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPlayerStat> Stats;
    
    TWINSTICK_API FPlayerStatContainer();
};

