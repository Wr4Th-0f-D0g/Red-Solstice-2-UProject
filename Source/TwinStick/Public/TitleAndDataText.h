#pragma once
#include "CoreMinimal.h"
#include "TitleAndDataText.generated.h"

USTRUCT(BlueprintType)
struct FTitleAndDataText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DataText;
    
    TWINSTICK_API FTitleAndDataText();
};

