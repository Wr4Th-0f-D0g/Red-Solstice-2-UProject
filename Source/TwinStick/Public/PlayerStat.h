#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStatComparison.h"
#include "PlayerStat.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatComparison ComparisonType;
    
    TWINSTICK_API FPlayerStat();
};

