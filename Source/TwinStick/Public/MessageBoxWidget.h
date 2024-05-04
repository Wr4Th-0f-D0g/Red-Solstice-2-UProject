#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MessageBoxInfo.h"
#include "MessageButtonClickedBpDelegate.h"
#include "MessageBoxWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMessageBoxWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* OKButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CancelButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageButtonClickedBp BlueprintButtonDelegate;
    
    UMessageBoxWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageBox(const FMessageBoxInfo& MessageBoxInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedOK();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedCancel();
    
};

