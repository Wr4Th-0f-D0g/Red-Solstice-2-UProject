#include "CutsceneWidgetBase.h"

UCutsceneWidgetBase::UCutsceneWidgetBase() {
    this->SkipTextBlock = NULL;
}

void UCutsceneWidgetBase::HandleCutsceneSkippedByUser() {
}


bool UCutsceneWidgetBase::CanSkipCutscene_Implementation() {
    return false;
}


