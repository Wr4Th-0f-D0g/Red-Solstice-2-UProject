#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EBossType.h"
#include "EEnemyThreatLevel.h"
#include "GeneratedWaveMonsterItem.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedWaveMonsterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyThreatLevel ThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossType BossType;
    
    TWINSTICK_API FGeneratedWaveMonsterItem();
};

