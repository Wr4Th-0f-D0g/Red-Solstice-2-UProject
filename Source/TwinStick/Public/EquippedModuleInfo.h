#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ModuleInfo.h"
#include "EquippedModuleInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEquippedModuleInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleInfo Module;
    
    UEquippedModuleInfo();

    UFUNCTION(BlueprintCallable)
    void SetModule(const FModuleInfo& InModule);
    
    UFUNCTION(BlueprintCallable)
    void RemoveModule();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ModuleSet();
    
};

