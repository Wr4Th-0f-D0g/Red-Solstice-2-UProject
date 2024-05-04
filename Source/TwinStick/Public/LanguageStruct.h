#pragma once
#include "CoreMinimal.h"
#include "LanguageStruct.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FLanguageStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LanguageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageInternalString;
    
    FLanguageStruct();
};

