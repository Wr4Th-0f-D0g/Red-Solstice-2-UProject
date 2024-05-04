#pragma once
#include "CoreMinimal.h"
#include "BotLevelData.h"
#include "BotSkillTree.generated.h"

USTRUCT(BlueprintType)
struct FBotSkillTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBotLevelData> SkillTree;
    
    TWINSTICK_API FBotSkillTree();
};

