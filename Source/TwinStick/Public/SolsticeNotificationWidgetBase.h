#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "ESolsticeMessagingResult.h"
#include "SolsticeNotificationWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeNotificationWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    USolsticeNotificationWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNotificationWidgetBP(FGameplayTag NotificationTag, const FString& AdditionalInfoString);
    
    UFUNCTION(BlueprintCallable)
    void CloseConfirmation(ESolsticeMessagingResult CloseResult);
    
};

