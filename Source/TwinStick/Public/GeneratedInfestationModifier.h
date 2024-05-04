#pragma once
#include "CoreMinimal.h"
#include "EEnemyThreatLevel.h"
#include "GeneratedInfestationModifierAdditionalMonsters.h"
#include "GeneratedInfestationModifier.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedInfestationModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedInfestationModifierAdditionalMonsters> AdditionalMonstersByWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EEnemyThreatLevel, int32> ThreatLevelIncreasePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MonsterIncreasePercent;
    
    TWINSTICK_API FGeneratedInfestationModifier();
};

