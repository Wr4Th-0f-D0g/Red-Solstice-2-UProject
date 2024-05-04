#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "StrategyInventoryItemData.h"
#include "EngineeringWidget.generated.h"

class UCampaign;
class UEngineeringObject;
class UStrategyItemWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEngineeringWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* InventoryVB;
    
    UEngineeringWidget();

    UFUNCTION(BlueprintCallable)
    void SortInventoryChildrenByName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProductionStarted(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProductionFinished(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineeringItemVisible(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleProductionStarted(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleProductionFinished(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleProductionChanged(UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStrategyItemWidget* GetWidgetFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaign* GetCampaignObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStrategyInventoryItemData> GetAllVisibleEngineeringItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStrategyInventoryItemData> GetAllEngineeringItems() const;
    
    UFUNCTION(BlueprintCallable)
    void FilterChildWidgetsByName(const FString& InputFilterString);
    
};

