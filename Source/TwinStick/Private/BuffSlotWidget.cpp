#include "BuffSlotWidget.h"

UBuffSlotWidget::UBuffSlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BuffForDisplay = NULL;
}


void UBuffSlotWidget::HandleStacksChanged(USolsticeBuffBase* Buff, int32 NewStacks, int32 OldStacks) {
}

UWidget* UBuffSlotWidget::GetBuffTooltip_Implementation() {
    return NULL;
}


