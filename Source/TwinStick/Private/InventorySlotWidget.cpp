#include "InventorySlotWidget.h"

UInventorySlotWidget::UInventorySlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentAnimationType = EInventorySlotAnimationType::None;
    this->AnimationDuration = 0.40f;
    this->AnimationPlayedTime = 0.00f;
    this->ItemType = EInventorySlotState::None;
    this->UsedForGamepad = false;
}


void UInventorySlotWidget::StartAnimation(EInventorySlotAnimationType AnimationType) {
}



void UInventorySlotWidget::SetHotkeyText(const FText& NewText) {
}

void UInventorySlotWidget::SetContext(UItem* NewItem) {
}




