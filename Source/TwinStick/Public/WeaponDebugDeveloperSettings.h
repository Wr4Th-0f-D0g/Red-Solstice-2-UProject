#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "WeaponDebugDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API UWeaponDebugDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawMuzzleBlockingTraces;
    
    UWeaponDebugDeveloperSettings();

};

