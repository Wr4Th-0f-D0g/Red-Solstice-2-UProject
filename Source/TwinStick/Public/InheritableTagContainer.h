#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InheritableTagContainer.generated.h"

USTRUCT(BlueprintType)
struct FInheritableTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CombinedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Added;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Removed;
    
    TWINSTICK_API FInheritableTagContainer();
};

