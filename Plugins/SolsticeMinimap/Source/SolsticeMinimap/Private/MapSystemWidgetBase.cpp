#include "MapSystemWidgetBase.h"

UMapSystemWidgetBase::UMapSystemWidgetBase() {
    this->DynamicMapMaterial = NULL;
    this->MapManager = NULL;
    this->MapCanvas = NULL;
    this->MapTexture = NULL;
    this->CanvasBorder = NULL;
    this->PlayerWidgetRef = NULL;
    this->ObserverWidgetRef = NULL;
    this->BoundSizeRatioX = 0.00f;
    this->BoundSizeRatioY = 0.00f;
    this->bCentralizePlayer = false;
    this->ZoomX = 0.00f;
    this->ZoomY = 0.00f;
    this->PanX = 0.00f;
    this->PanY = 0.00f;
    this->bAllowCircleMask = false;
}

void UMapSystemWidgetBase::SetPlayerPositionInCanvas() {
}

void UMapSystemWidgetBase::SetObserverPositionInCanvas(bool bSizeOffset) {
}

void UMapSystemWidgetBase::SetCanvasProperties(UCanvasPanel* Canvas, UWidget* MapWidget, UWidget* PlayerWidget, UWidget* ObserverWidget) {
}

FVector2D UMapSystemWidgetBase::GetPlayerPositionDecentralized(FVector2D TestCanvasSize) const {
    return FVector2D{};
}

ACharacter* UMapSystemWidgetBase::GetPlayerCharacter() const {
    return NULL;
}

void UMapSystemWidgetBase::GetMapBounds(FVector2D& OutMinBounds, FVector2D& OutMaxBounds) const {
}

FVector2D UMapSystemWidgetBase::GetCanvasSize() const {
    return FVector2D{};
}

FVector2D UMapSystemWidgetBase::GetCanvasAlignment() const {
    return FVector2D{};
}



void UMapSystemWidgetBase::ChangeTexture(UTexture* NewTexture) {
}


