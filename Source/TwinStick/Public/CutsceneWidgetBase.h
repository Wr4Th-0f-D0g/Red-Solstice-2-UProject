#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "CutsceneWidgetBase.generated.h"

class UCommonRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCutsceneWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SkipCutsceneInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* SkipTextBlock;
    
    UCutsceneWidgetBase();

    UFUNCTION(BlueprintCallable)
    void HandleCutsceneSkippedByUser();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CutsceneSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSkipCutscene();
    
};

