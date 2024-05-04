#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_AddGameplayTag.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TWINSTICK_API UAnimNotify_AddGameplayTag : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AddedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClientAdd;
    
    UAnimNotify_AddGameplayTag();

};

