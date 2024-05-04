#include "ChatRowWidgetBase.h"

UChatRowWidgetBase::UChatRowWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->InternalRichTextBlock = NULL;
    this->WrapTextLength = 0.00f;
    this->SenderPlayerState = NULL;
    this->bSenderIsAvoided = false;
    this->SoundEvent = NULL;
}

void UChatRowWidgetBase::SetupChatRow(ASolsticePlayerState* InPlayerState, const FString& InMessage, const FString& StyleCode, float MessageLifetime) {
}

void UChatRowWidgetBase::SetTextInternal(const FString& InSenderName, const FString& InMessage) {
}



void UChatRowWidgetBase::OnGameOptionsChanged() {
}

void UChatRowWidgetBase::OnAvoidedPlayersChanged() {
}

void UChatRowWidgetBase::FinishRemovalTimer() {
}


