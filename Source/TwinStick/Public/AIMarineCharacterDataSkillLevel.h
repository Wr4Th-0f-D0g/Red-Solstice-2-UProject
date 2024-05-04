#pragma once
#include "CoreMinimal.h"
#include "AIMarineCharacterDataSkillLevel.generated.h"

USTRUCT(BlueprintType)
struct FAIMarineCharacterDataSkillLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillLevel;
    
    TWINSTICK_API FAIMarineCharacterDataSkillLevel();
};

