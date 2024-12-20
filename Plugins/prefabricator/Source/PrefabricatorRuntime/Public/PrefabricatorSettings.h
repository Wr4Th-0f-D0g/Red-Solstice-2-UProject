#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EPrefabricatorPivotPosition.h"
#include "PrefabricatorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Prefabricator)
class PREFABRICATORRUNTIME_API UPrefabricatorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrefabricatorPivotPosition PivotPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDynamicUpdate;
    
    UPrefabricatorSettings();

};

