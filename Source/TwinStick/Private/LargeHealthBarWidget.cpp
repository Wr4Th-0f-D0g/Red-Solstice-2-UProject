#include "LargeHealthBarWidget.h"

ULargeHealthBarWidget::ULargeHealthBarWidget() {
    this->SuppressionProgressBar = NULL;
    this->SuppressionOverlay = NULL;
    this->ArmorComp = NULL;
    this->SupressionComp = NULL;
}




void ULargeHealthBarWidget::HandleSupressionChanged() {
}

void ULargeHealthBarWidget::HandleSupressedChanged(bool bNewSupressed) {
}


void ULargeHealthBarWidget::HandleResistanceChanged() {
}

void ULargeHealthBarWidget::HandleArmorValChanged() {
}

void ULargeHealthBarWidget::HandleArmorChanged(int32 CurrentResources, int32 OriginalResources) {
}



