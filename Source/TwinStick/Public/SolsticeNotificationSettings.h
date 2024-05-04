#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SolsticeNotificationSettings.generated.h"

class UDataTable;
class USolsticeNotificationWidgetBase;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TWINSTICK_API USolsticeNotificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> NotificationSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USolsticeNotificationWidgetBase> NotificationWidgetClass;
    
    USolsticeNotificationSettings();

};

