#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EBossType.h"
#include "EMonsterType.h"
#include "GeneratedMonster.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedMonster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MonsterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonsterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossType BossType;
    
    TWINSTICK_API FGeneratedMonster();
};

