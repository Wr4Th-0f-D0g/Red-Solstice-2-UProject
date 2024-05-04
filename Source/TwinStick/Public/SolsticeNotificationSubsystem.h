#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SolsticeNotificationSubsystem.generated.h"

class UDataTable;
class USolsticeNotificationWidgetBase;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeNotificationSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USolsticeNotificationWidgetBase*> CurrentlyDisplayedNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NotificationSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeNotificationWidgetBase> WidgetClass;
    
    USolsticeNotificationSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveNotification(FGameplayTag NotificationTag, bool bBroadcastDelegate);
    
};

