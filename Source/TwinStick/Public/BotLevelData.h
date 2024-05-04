#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BotLevelData.generated.h"

USTRUCT(BlueprintType)
struct FBotLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkillLevel;
    
    TWINSTICK_API FBotLevelData();
};

