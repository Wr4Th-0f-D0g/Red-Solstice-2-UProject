#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DeveloperSettingsBackedByCVars.generated.h"

UCLASS(Abstract, Blueprintable, Config=EditorPerProjectUserSettings)
class TWINSTICK_API UDeveloperSettingsBackedByCVars : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDeveloperSettingsBackedByCVars();

};

