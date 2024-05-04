#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "SolsticeGameplayDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API USolsticeGameplayDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDoorDebugDrawing;
    
    USolsticeGameplayDeveloperSettings();

};

