#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerRank.h"
#include "MonthlyPlayerRank.generated.h"

USTRUCT(BlueprintType)
struct FMonthlyPlayerRank : public FPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MonthlyTags;
    
    TWINSTICK_API FMonthlyPlayerRank();
};

