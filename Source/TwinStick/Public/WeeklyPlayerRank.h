#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerRank.h"
#include "WeeklyPlayerRank.generated.h"

USTRUCT(BlueprintType)
struct FWeeklyPlayerRank : public FPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeeklyTags;
    
    TWINSTICK_API FWeeklyPlayerRank();
};

