#pragma once
#include "CoreMinimal.h"
#include "FollowerMarineSpawnSettings.h"
#include "FollowerMarineSpawnArgs.generated.h"

USTRUCT(BlueprintType)
struct FFollowerMarineSpawnArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowerMarineSpawnSettings MarineSpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontProject;
    
    TWINSTICK_API FFollowerMarineSpawnArgs();
};

