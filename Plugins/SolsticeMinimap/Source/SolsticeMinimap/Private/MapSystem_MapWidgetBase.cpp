#include "MapSystem_MapWidgetBase.h"

UMapSystem_MapWidgetBase::UMapSystem_MapWidgetBase() {
    this->MapMaterial = NULL;
    this->bIsCanvasInitialParametersSet = false;
    this->CurrentZoomLevel = 0.00f;
    this->PanSpeed = 5;
    this->MinimumZoomLevel = 0;
    this->MaximumZoomLevel = 10;
    this->DefaultZoomLevel = 0;
    this->ZoomSpeed = 12;
    this->bSaveCurrentZoomLevel = false;
}

void UMapSystem_MapWidgetBase::ZoomInOut(float ZoomValue) {
}

void UMapSystem_MapWidgetBase::ZoomAtCanvasPosition(float ZoomValue, FVector2D CanvasPosition) {
}

void UMapSystem_MapWidgetBase::UpdateElements(bool bSizeOffset) {
}


void UMapSystem_MapWidgetBase::SetElementPosition(ACharacter* PlayerCharacter, const FVector& Location, float RotationYaw, UMapSystem_MapElementBase* ElementWidget, bool bSizeOffset) {
}

void UMapSystem_MapWidgetBase::ResetDefaultZoom() {
}

void UMapSystem_MapWidgetBase::PanRight(float RightPanAxis) {
}

void UMapSystem_MapWidgetBase::PanForward(float ForwardPanAxis) {
}


FVector UMapSystem_MapWidgetBase::GetWorldLocationFromMousePosition() {
    return FVector{};
}

FVector2D UMapSystem_MapWidgetBase::GetScreenLocationFromWorld(FVector WorldLoc) const {
    return FVector2D{};
}


