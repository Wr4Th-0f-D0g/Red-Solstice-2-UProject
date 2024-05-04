#pragma once
#include "CoreMinimal.h"
#include "EFiringMode.h"
#include "MarineSpawnSettings.h"
#include "FollowerMarineSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FFollowerMarineSpawnSettings : public FMarineSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScriptedBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringMode InitialFiringMode;
    
    TWINSTICK_API FFollowerMarineSpawnSettings();
};

