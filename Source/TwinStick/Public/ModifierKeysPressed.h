#pragma once
#include "CoreMinimal.h"
#include "ModifierKeysPressed.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FModifierKeysPressed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShiftPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCtrlPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAltPressed;
    
    FModifierKeysPressed();
};

