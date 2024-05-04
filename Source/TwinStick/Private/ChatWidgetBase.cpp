#include "ChatWidgetBase.h"

UChatWidgetBase::UChatWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatRowClass = NULL;
    this->MaxChatRowItems = 0;
    this->ChatPanel = NULL;
    this->bHideTimerEnabled = true;
    this->ChatHideDelay = 4.00f;
    this->ChatMainSizeBox = NULL;
    this->ChatInputAreaBorder = NULL;
}

void UChatWidgetBase::UpdateOptionsSettings() {
}

void UChatWidgetBase::SendChatMessage(const FText& ChatMessage) {
}



void UChatWidgetBase::HandleGameSystemMessageReceived(const FText& Message, const FLinearColor& Color) {
}

void UChatWidgetBase::HandleGameChatMessageReceived(ASolsticePlayerState* SenderPlayerState, const FString& Message) {
}

void UChatWidgetBase::CreateChatRow(ASolsticePlayerState* SenderPlayerState, const FString& MessageText, FGameplayTag MessageType, float MessageTimer) {
}

void UChatWidgetBase::ClearChatPanel() {
}


