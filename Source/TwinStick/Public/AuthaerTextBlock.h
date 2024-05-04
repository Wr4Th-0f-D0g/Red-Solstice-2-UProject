#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "AuthaerTextBlock.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UAuthaerTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyScrollWithMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UAuthaerTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextAsString(const FString& NewText);
    
};

