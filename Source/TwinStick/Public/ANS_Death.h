#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_Death.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TWINSTICK_API UANS_Death : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowBeginNotify;
    
    UANS_Death();

};

