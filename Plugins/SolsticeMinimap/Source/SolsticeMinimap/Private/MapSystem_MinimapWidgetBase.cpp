#include "MapSystem_MinimapWidgetBase.h"

UMapSystem_MinimapWidgetBase::UMapSystem_MinimapWidgetBase() {
    this->UpdateCounter = 0;
    this->DrawingCanvas = NULL;
    this->MaxUnusedPingElements = 10;
    this->MinimapPingWidgetClass = NULL;
    this->bPanOffset = false;
    this->bPanOffsetA = false;
    this->UpdatedRotation = 0.00f;
    this->InitialRotation = 0.00f;
    this->bAutoRotateMap = false;
    this->MinimapMaterial = NULL;
    this->MinimapCircleMaskedMaterial = NULL;
    this->bIsMinimapEnabled = false;
}

void UMapSystem_MinimapWidgetBase::UpdateElements() {
}


void UMapSystem_MinimapWidgetBase::RemovePingElement(UMapSystemWidget_PingElementBase* Element) {
}



FVector2D UMapSystem_MinimapWidgetBase::GetMinimapPan() {
    return FVector2D{};
}

void UMapSystem_MinimapWidgetBase::CreatePingElement(FVector2D Location) {
}


void UMapSystem_MinimapWidgetBase::AddMinimapRotation(float Yaw) {
}


