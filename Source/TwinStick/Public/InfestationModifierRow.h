#pragma once
#include "CoreMinimal.h"
#include "EEnemyThreatLevel.h"
#include "InfestationModifierAdditionalMonsters.h"
#include "InfestationModifierRow.generated.h"

USTRUCT(BlueprintType)
struct FInfestationModifierRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MonsterIncreasePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EEnemyThreatLevel, int32> ThreatLevelIncreasePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfestationModifierAdditionalMonsters> AdditionalMonstersToSpawn;
    
    TWINSTICK_API FInfestationModifierRow();
};

