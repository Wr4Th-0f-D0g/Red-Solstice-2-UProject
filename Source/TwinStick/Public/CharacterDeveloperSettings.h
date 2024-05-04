#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsBackedByCVars.h"
#include "CharacterDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API UCharacterDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MechWeaponsDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterDebug;
    
    UCharacterDeveloperSettings();

};

