#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkirmishInventoryButtonBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USkirmishInventoryButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ProductionItemName;
    
    USkirmishInventoryButtonBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVisibleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNotVisibleAnimation();
    
};

