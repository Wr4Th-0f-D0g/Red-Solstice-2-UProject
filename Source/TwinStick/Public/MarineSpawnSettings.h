#pragma once
#include "CoreMinimal.h"
#include "PowerSuitModel.h"
#include "MarineSpawnSettings.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FMarineSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoBehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* CustomBehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarineText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerSuitModel PowerSuitModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSkillsLevel;
    
    TWINSTICK_API FMarineSpawnSettings();
};

