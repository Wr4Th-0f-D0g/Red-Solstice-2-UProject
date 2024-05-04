#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StrategyInventoryItemData.h"
#include "EngineeringData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API UEngineeringData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EngineeringItemTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItemData> EngineeringItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> BotTrainingMap;
    
    UEngineeringData();

    UFUNCTION(BlueprintCallable)
    void PopulateEngineeringItemTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetItemTagsForInventoryDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyInventoryItemData GetItemDataFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStrategyInventoryItemData> GetAllEngineeringItems() const;
    
};

