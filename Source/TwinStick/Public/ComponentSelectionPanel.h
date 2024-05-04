#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ModuleActionRequestedDelegate.h"
#include "ComponentSelectionPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UComponentSelectionPanel : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleActionRequested RequestEquipAction;
    
    UComponentSelectionPanel();

};

