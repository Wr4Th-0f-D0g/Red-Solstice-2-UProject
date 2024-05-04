#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESolsticeNotificationButtonConfiguration.h"
#include "ESolsticeNotificationStyle.h"
#include "NotificationSettings.generated.h"

USTRUCT(BlueprintType)
struct FNotificationSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeNotificationStyle NotificationStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESolsticeNotificationButtonConfiguration> ButtonConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedBody;
    
    TWINSTICK_API FNotificationSettings();
};

