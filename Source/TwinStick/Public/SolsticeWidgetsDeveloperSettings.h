#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SolsticeWidgetsDeveloperSettings.generated.h"

class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TWINSTICK_API USolsticeWidgetsDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> GamepadFocusWidgetClass;
    
    USolsticeWidgetsDeveloperSettings();

};

