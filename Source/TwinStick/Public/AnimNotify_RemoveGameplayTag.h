#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_RemoveGameplayTag.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TWINSTICK_API UAnimNotify_RemoveGameplayTag : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RemovedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClientRemove;
    
    UAnimNotify_RemoveGameplayTag();

};

