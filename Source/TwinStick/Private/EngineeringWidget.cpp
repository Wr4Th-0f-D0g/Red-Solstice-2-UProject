#include "EngineeringWidget.h"

UEngineeringWidget::UEngineeringWidget() {
    this->InventoryVB = NULL;
}

void UEngineeringWidget::SortInventoryChildrenByName() {
}



bool UEngineeringWidget::IsEngineeringItemVisible(const FGameplayTag& InItemTag) const {
    return false;
}

void UEngineeringWidget::HandleProductionStarted(UEngineeringObject* EngineeringObject) {
}

void UEngineeringWidget::HandleProductionFinished(UEngineeringObject* EngineeringObject) {
}

void UEngineeringWidget::HandleProductionChanged(UEngineeringObject* EngineeringObject) {
}

UStrategyItemWidget* UEngineeringWidget::GetWidgetFor(const FGameplayTag& InItemTag) const {
    return NULL;
}

UCampaign* UEngineeringWidget::GetCampaignObject() const {
    return NULL;
}

TArray<FStrategyInventoryItemData> UEngineeringWidget::GetAllVisibleEngineeringItems() const {
    return TArray<FStrategyInventoryItemData>();
}

TArray<FStrategyInventoryItemData> UEngineeringWidget::GetAllEngineeringItems() const {
    return TArray<FStrategyInventoryItemData>();
}

void UEngineeringWidget::FilterChildWidgetsByName(const FString& InputFilterString) {
}


