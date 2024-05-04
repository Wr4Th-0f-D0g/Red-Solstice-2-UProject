#include "BuildingLootInfoWidget.h"

UBuildingLootInfoWidget::UBuildingLootInfoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemLookupTable = NULL;
    this->ItemDescriptionTable = NULL;
}

TArray<FName> UBuildingLootInfoWidget::GetItemNamesFromLootInfo(const FLootInformation& InLootInfo) {
    return TArray<FName>();
}


