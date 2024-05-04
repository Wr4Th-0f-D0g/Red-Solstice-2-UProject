#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MonsterTag.generated.h"

USTRUCT(BlueprintType)
struct FMonsterTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MonsterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGroupData;
    
    TWINSTICK_API FMonsterTag();
};

