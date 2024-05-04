#pragma once
#include "CoreMinimal.h"
#include "EnemyThreatSearchItem.h"
#include "EnemyThreatSearch.generated.h"

USTRUCT(BlueprintType)
struct FEnemyThreatSearch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyThreatSearchItem MonsterThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyThreatSearchItem EnemyMarineThreatLevel;
    
    TWINSTICK_API FEnemyThreatSearch();
};

