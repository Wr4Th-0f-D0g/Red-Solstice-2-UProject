#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_GameplayTag.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TWINSTICK_API UAnimNotify_GameplayTag : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyName;
    
public:
    UAnimNotify_GameplayTag();

};

