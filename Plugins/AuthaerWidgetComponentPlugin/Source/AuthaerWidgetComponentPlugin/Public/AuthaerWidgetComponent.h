#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "AuthaerWidgetComponent.generated.h"

class UAuthaerComponentUserWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUTHAERWIDGETCOMPONENTPLUGIN_API UAuthaerWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAuthaerComponentUserWidget> ComponentUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoHideComponentOutsideScreenSpace;
    
    UAuthaerWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

