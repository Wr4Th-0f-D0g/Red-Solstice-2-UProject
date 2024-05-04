#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "NavigationDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API UNavigationDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizeVehicleBlockers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizeRTSNavModifiers;
    
    UNavigationDeveloperSettings();

};

