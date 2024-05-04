#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GamepadCharacterSkillsWidget.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadCharacterSkillsWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SlotWidgetType;
    
    UGamepadCharacterSkillsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSkillClassDefaultObject(UObject* SkillCDO);
    
};

