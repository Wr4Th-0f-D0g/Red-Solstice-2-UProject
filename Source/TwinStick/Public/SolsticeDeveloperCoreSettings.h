#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "SolsticeCheatToRun.h"
#include "SolsticeDeveloperCoreSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API USolsticeDeveloperCoreSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeCheatToRun> CheatsToRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAISpawnSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGodMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteAmmo;
    
    USolsticeDeveloperCoreSettings();

};

