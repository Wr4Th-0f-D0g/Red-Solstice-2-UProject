#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ModuleSelectionButtonControlsBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UModuleSelectionButtonControlsBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextModuleName;
    
    UModuleSelectionButtonControlsBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVisibleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNotVisibleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddOrRemoveModule(bool bAdding);
    
};

