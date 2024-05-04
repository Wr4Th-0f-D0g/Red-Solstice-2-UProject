#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "StrategyUpgradeTreeData.h"
#include "BaseUpgradeData.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBaseUpgradeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyUpgradeTreeData> Upgrades;
    
    UBaseUpgradeData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyUpgradeTreeData GetUpgradeTreeData(const FGameplayTag& InTag) const;
    
};

