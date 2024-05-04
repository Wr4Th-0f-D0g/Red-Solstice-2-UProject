#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "GameDifficultyInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameDifficultyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    TWINSTICK_API FGameDifficultyInfo();
};

