#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ProfileSkillUnlock.generated.h"

USTRUCT(BlueprintType)
struct FProfileSkillUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag TechTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TechTier;
    
    TWINSTICK_API FProfileSkillUnlock();
};

