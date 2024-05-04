#include "MessageBoxWidget.h"

UMessageBoxWidget::UMessageBoxWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OKButton = NULL;
    this->CancelButton = NULL;
}


void UMessageBoxWidget::OnClickedOK() {
}

void UMessageBoxWidget::OnClickedCancel() {
}


