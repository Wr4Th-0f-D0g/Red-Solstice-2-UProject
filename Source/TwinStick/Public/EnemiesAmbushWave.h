#pragma once
#include "CoreMinimal.h"
#include "EnemiesAmbushRow.h"
#include "EnemiesAmbushWave.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FEnemiesAmbushWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemiesAmbushRow> EnemyRow;
    
    FEnemiesAmbushWave();
};

