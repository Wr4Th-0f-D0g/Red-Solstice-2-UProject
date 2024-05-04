#include "EventWidgetBase.h"

UEventWidgetBase::UEventWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->EventObject = NULL;
    this->Tooltip = NULL;
    this->bPaused = false;
}

void UEventWidgetBase::Unpause() {
}


void UEventWidgetBase::SetEventObject(UObject* InEventObject) {
}

void UEventWidgetBase::SetContext(TScriptInterface<IEventListInterface> NewContext) {
}



void UEventWidgetBase::Pause() {
}


