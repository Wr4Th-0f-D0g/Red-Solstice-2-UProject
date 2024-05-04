#pragma once
#include "CoreMinimal.h"
#include "EEnemyThreatLevel.h"
#include "EThreatGreaterEqual.h"
#include "EnemyThreatSearchItem.generated.h"

USTRUCT(BlueprintType)
struct FEnemyThreatSearchItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyThreatLevel ThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreatGreaterEqual ThreatLevelEquality;
    
    TWINSTICK_API FEnemyThreatSearchItem();
};

