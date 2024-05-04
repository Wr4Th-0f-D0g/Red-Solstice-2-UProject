#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EDifficulty.h"
#include "CombatLayerMissionSpawnParameters.generated.h"

USTRUCT(BlueprintType)
struct FCombatLayerMissionSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty MinimumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty MaximumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredMonsterWaveProgress;
    
    TWINSTICK_API FCombatLayerMissionSpawnParameters();
};

