#include "ClientUXComponent.h"

UClientUXComponent::UClientUXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UClientUXComponent::OwnerSpawnEmitterAttached(UParticleSystem* EmitterTemplate) {
}

void UClientUXComponent::OwnerSendGameMessageFromSimpleText_Integer(const UDataTable* DataTable, FName RowName, int32 InInteger, FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::OwnerSendGameMessageFromSimpleText(const UDataTable* DataTable, FName RowName, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::OwnerSendGameMessage(const FText& MessageText, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::OwnerPlaySoundAttached(UFMODEvent* Event) {
}

void UClientUXComponent::ClientSpawnEmitterAttached_Implementation(UParticleSystem* EmitterTemplate) {
}

void UClientUXComponent::ClientSendGameMessageFromSimpleText_Integer_Implementation(const UDataTable* DataTable, FName RowName, int32 InInteger, FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::ClientSendGameMessageFromSimpleText_Implementation(const UDataTable* DataTable, FName RowName, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::ClientSendGameMessage_Implementation(const FText& MessageText, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void UClientUXComponent::ClientPlaySoundAttached_Implementation(UFMODEvent* Event) {
}


