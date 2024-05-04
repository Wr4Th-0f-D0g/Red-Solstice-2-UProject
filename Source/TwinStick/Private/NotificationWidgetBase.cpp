#include "NotificationWidgetBase.h"

UNotificationWidgetBase::UNotificationWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bPersistent = false;
    this->Lifetime = 12.00f;
}


