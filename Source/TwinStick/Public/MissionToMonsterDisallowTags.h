#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionToMonsterDisallowTags.generated.h"

USTRUCT(BlueprintType)
struct FMissionToMonsterDisallowTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MonsterTags;
    
    TWINSTICK_API FMissionToMonsterDisallowTags();
};

