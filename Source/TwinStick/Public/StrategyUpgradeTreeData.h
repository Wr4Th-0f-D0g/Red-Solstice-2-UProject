#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StrategyUpgradeItemData.h"
#include "Templates/SubclassOf.h"
#include "StrategyUpgradeTreeData.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FStrategyUpgradeTreeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyUpgradeItemData> Upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> GrantedBuff;
    
    TWINSTICK_API FStrategyUpgradeTreeData();
};

