#include "SolsticePlayerController.h"

ASolsticePlayerController::ASolsticePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void ASolsticePlayerController::ServerSendGameSystemMessageToAll_Implementation(const FText& MessageText, const FLinearColor& MessageColor) {
}

void ASolsticePlayerController::ServerSendGameChatMessage_Implementation(const FString& MessageText) {
}

void ASolsticePlayerController::ServerSendCharacterNameMessageToAll_Implementation(const FText& MessageText, const FLinearColor& MessageColor) {
}

void ASolsticePlayerController::ServerRequestMissionGenerationData_Implementation() {
}

void ASolsticePlayerController::ServerNotifyDestroyingSession_Implementation() {
}

AHeroCharacterBase* ASolsticePlayerController::GetHero() const {
    return NULL;
}

void ASolsticePlayerController::ClientReceiveMissionGenerationData_Implementation(const FMissionGenerationData& MissionGenerationData) {
}

void ASolsticePlayerController::ClientReceiveGameSystemMessage_Implementation(const FText& MessageText, const FLinearColor& MessageColor) {
}

void ASolsticePlayerController::ClientReceiveGameChatMessage_Implementation(ASolsticePlayerState* SenderPlayerState, const FString& MessageText) {
}

void ASolsticePlayerController::ClientReceiveCharacterNameMessage_Implementation(const FText& MessageText, const FLinearColor& MessageColor) {
}

void ASolsticePlayerController::ClientHostLeavingMatch_Implementation() {
}

void ASolsticePlayerController::ClientFailedMissionGenerationData_Implementation() {
}

void ASolsticePlayerController::ChangeGamepadType(FName GamepadName) {
}


