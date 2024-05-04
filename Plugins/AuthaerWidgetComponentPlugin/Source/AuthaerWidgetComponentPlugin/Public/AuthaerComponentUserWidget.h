#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AuthaerComponentUserWidget.generated.h"

class UAuthaerWidgetComponent;

UCLASS(Blueprintable, EditInlineNew)
class AUTHAERWIDGETCOMPONENTPLUGIN_API UAuthaerComponentUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerWidgetComponent* OwningComponent;
    
public:
    UAuthaerComponentUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAuthaerWidgetComponent* GetOwningComponent() const;
    
};

