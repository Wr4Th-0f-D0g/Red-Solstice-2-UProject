#include "AuthaerComponentUserWidget.h"

UAuthaerComponentUserWidget::UAuthaerComponentUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningComponent = NULL;
}

UAuthaerWidgetComponent* UAuthaerComponentUserWidget::GetOwningComponent() const {
    return NULL;
}


