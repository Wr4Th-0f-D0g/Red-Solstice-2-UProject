#include "HealthBarWidgetBase.h"

UHealthBarWidgetBase::UHealthBarWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->IndicatorDescriptor = NULL;
    this->HealthBarActor = NULL;
}

void UHealthBarWidgetBase::UpdateHealthAndArmor() {
}

void UHealthBarWidgetBase::SetDamageableContext(TScriptInterface<IDamagable> NewContext) {
}



