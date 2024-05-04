#include "MapDynamicActorComponent.h"

UMapDynamicActorComponent::UMapDynamicActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDelayAddIcon = false;
    this->DelayTime = 0.00f;
    this->bManualAdd = false;
    this->bShowInBigMap = false;
    this->bShowInMinimap = false;
    this->bManualRemoved = false;
}

void UMapDynamicActorComponent::TryAddToMapSystem() {
}

void UMapDynamicActorComponent::SetMinimapIconAlwaysVisible(bool bAlwaysVisible) {
}

void UMapDynamicActorComponent::SetMapLeaderPoint(FVector2D MapLeaderPoint) {
}

void UMapDynamicActorComponent::SetIconTint(FLinearColor InTint) {
}

void UMapDynamicActorComponent::SetIconTexture(UTexture2D* InTexture) {
}

void UMapDynamicActorComponent::SetIconRadius(float Radius) {
}

void UMapDynamicActorComponent::ServerSetMapLeaderPoint_Implementation(FVector2D MapLeaderPoint) {
}

void UMapDynamicActorComponent::ServerRemoveMapLeaderPoint_Implementation(bool bAllPoints) {
}

void UMapDynamicActorComponent::ServerPingLocation_Implementation(FVector2D NewPingLocation) {
}

void UMapDynamicActorComponent::RemoveMapLeaderPoint(bool bAllPoints) {
}

void UMapDynamicActorComponent::RemoveIcon() {
}

void UMapDynamicActorComponent::PingLocation(FVector2D NewPingLocation) {
}

void UMapDynamicActorComponent::AddToMapSystem() {
}


