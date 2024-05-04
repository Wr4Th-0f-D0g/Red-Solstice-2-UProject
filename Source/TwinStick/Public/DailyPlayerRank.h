#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerRank.h"
#include "DailyPlayerRank.generated.h"

USTRUCT(BlueprintType)
struct FDailyPlayerRank : public FPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DailyTags;
    
    TWINSTICK_API FDailyPlayerRank();
};

