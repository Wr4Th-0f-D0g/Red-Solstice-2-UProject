#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MonsterSpawnTag.generated.h"

USTRUCT(BlueprintType)
struct FMonsterSpawnTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    TWINSTICK_API FMonsterSpawnTag();
};

