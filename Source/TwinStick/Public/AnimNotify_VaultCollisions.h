#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_VaultCollisions.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TWINSTICK_API UAnimNotify_VaultCollisions : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreCollisions;
    
public:
    UAnimNotify_VaultCollisions();

};

