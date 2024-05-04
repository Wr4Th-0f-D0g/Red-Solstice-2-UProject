#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "SolsticeRichTextBlock.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    USolsticeRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextWrapLength(float InWrapLength);
    
};

