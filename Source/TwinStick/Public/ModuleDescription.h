#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ModuleInfo.h"
#include "ModuleDescription.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UModuleDescription : public UUserWidget {
    GENERATED_BODY()
public:
    UModuleDescription();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewModule(const FModuleInfo& Module);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviewModuleChanged(const FModuleInfo& Module, bool IsHovered, bool IsDragged);
    
};

