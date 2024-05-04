#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NotificationWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UNotificationWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UNotificationWidgetBase();

};

