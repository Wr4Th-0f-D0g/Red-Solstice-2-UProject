#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RichTextWidgetBase.generated.h"

class USolsticeRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API URichTextWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeRichTextBlock* MainText;
    
    URichTextWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTextWrapLength(float WrapLength);
    
};

