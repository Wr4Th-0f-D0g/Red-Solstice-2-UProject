#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionWidgetBase.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UInteractionWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractionActor;
    
    UInteractionWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWidgetVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetText(const FText& InItemName, const FText& InItemShortDescription, const FText& InItemFullDescription);
    
};

