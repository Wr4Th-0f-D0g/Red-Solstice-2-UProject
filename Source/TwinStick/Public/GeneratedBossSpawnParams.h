#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "GeneratedBossSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedBossSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForUltraBossRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, float> TimeForEpicBossRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxEpicBossesAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxMiniBossesAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, int32> MaxAlmostBossesAtTime;
    
    TWINSTICK_API FGeneratedBossSpawnParams();
};

