#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "GameDifficultyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameDifficultyChanged, EDifficulty, Difficulty);

