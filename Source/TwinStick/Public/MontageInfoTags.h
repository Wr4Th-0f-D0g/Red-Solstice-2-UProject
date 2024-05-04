#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MontageInfoTags.generated.h"

USTRUCT(BlueprintType)
struct FMontageInfoTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemove;
    
    TWINSTICK_API FMontageInfoTags();
};

