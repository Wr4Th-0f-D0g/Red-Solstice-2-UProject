#include "InventorySlotWidgetBase.h"

UInventorySlotWidgetBase::UInventorySlotWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ImageSelected = NULL;
    this->ItemImage = NULL;
    this->ItemCountSizeBox = NULL;
    this->ItemCountOverlay = NULL;
    this->ItemCountText = NULL;
    this->ItemProgress = NULL;
    this->KeyOverlay = NULL;
}



void UInventorySlotWidgetBase::SetContext(UItem* NewItem) {
}


