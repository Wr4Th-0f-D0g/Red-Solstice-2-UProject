#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GamepadFocusDisplayBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadFocusDisplayBase : public UUserWidget {
    GENERATED_BODY()
public:
    UGamepadFocusDisplayBase();

};

