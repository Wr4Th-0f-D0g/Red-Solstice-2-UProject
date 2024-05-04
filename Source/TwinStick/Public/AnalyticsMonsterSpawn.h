#pragma once
#include "CoreMinimal.h"
#include "AnalyticsMonsterSpawnItem.h"
#include "AnalyticsMonsterSpawn.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsMonsterSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsMonsterSpawnItem> Items;
    
    TWINSTICK_API FAnalyticsMonsterSpawn();
};

