#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "LanguageStruct.h"
#include "OptionsMenuGameplay.generated.h"

class UComboBoxString;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UOptionsMenuGameplay : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLanguageStruct> LanguageInfos;
    
public:
    UOptionsMenuGameplay();

    UFUNCTION(BlueprintCallable)
    void InitComboBoxForLanguage(UComboBoxString* InBox);
    
};

