#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ControlBindingSaveStruct.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FControlBindingSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping BindingSavedKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping BindingAltSavedKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping BindingSavedGamepad;
    
    FControlBindingSaveStruct();
};

