#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BotLevel.generated.h"

USTRUCT(BlueprintType)
struct FBotLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LevelOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SelectedOptions;
    
    TWINSTICK_API FBotLevel();
};

