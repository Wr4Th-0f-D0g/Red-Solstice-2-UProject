#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AN_StopMovement.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TWINSTICK_API UAN_StopMovement : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetMovementModeNone;
    
    UAN_StopMovement();

};

