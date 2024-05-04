#include "RichTextWidgetBase.h"

URichTextWidgetBase::URichTextWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->MainText = NULL;
}

void URichTextWidgetBase::SetTextWrapLength(float WrapLength) {
}


