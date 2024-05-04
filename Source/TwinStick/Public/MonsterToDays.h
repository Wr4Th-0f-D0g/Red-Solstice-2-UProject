#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMonsterType.h"
#include "MonsterToDays.generated.h"

USTRUCT(BlueprintType)
struct FMonsterToDays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterType, int32> RollMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WavePointBaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WavePointAdditionPerWave;
    
    TWINSTICK_API FMonsterToDays();
};

