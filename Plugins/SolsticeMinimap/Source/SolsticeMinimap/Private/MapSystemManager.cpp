#include "MapSystemManager.h"

AMapSystemManager::AMapSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableAutoInitialize = false;
    this->MapTextureNew = NULL;
    this->bMapInitialized = false;
    this->StaticElements = NULL;
    this->MapTexture = NULL;
    this->MiniMapMaskTexture = NULL;
    this->MinimapWidgetClass = NULL;
    this->MinimapElementWidgetClass = NULL;
    this->MapWidgetClass = NULL;
    this->MapElementWidgetClass = NULL;
    this->MaxUnusedWidgets = 50;
    this->PingIconTimeout = 3.00f;
    this->bUseFixedZoom = true;
    this->MapSystemInitializationDelay = 0.50f;
    this->FustrumHeight = 1000.00f;
    this->BiomassRadiusTexture = NULL;
    this->FrustrumRenderingTexture = NULL;
    this->MaxMapPathingLines = 20;
    this->RenderRT = NULL;
    this->MapPathingRT = NULL;
    this->BiomassRT = NULL;
    this->MapBoundsActor = NULL;
    this->MinimapWidget = NULL;
    this->MapWidget = NULL;
    this->CurrentHoveredElement = NULL;
    this->bIsMapOpened = false;
    this->bIsMinimapVisible = true;
    this->bIsInitialized = false;
}

void AMapSystemManager::UpdateMapTextureFromSnapshot(float Delay, TEnumAsByte<ESceneCaptureSource> CaptureSource) {
}

void AMapSystemManager::ShowMinimapMap(bool bShow) {
}

void AMapSystemManager::ShowBigMap(bool bShow) {
}

void AMapSystemManager::SetMinimapVisibility(bool bNewVisible) {
}

void AMapSystemManager::SetMinimapLocationTag(const FGameplayTag& InTag) {
}

void AMapSystemManager::RemoveMapActor(AActor* Actor) {
}

void AMapSystemManager::RebuildDynamicActors() {
}

void AMapSystemManager::OnMapElementUnHovered() {
}

void AMapSystemManager::OnMapElementHovered(UMapSystem_MapElementBase* HoveredElement) {
}

void AMapSystemManager::MapZoomInOut(float ZoomValue) {
}

void AMapSystemManager::MapTextureGenerated() {
}

void AMapSystemManager::MapPanRight(float RightPanAxis) {
}

void AMapSystemManager::MapPanForward(float ForwardPanAxis) {
}

bool AMapSystemManager::IsMinimapOpen() const {
    return false;
}

bool AMapSystemManager::IsMapOpen() const {
    return false;
}

void AMapSystemManager::InitializeMapSystem() {
}

void AMapSystemManager::HandleRenderSnapshotDone(UTexture* NewTexture) {
}

void AMapSystemManager::CreateSnapshotByTags(UTextureRenderTarget2D* SourceRT, TArray<FName> ActorTags, const FRotator& CustomRotation, TEnumAsByte<ESceneCaptureSource> CaptureSource, bool bSetRenderDepth) {
}

void AMapSystemManager::ClearMinimapLocationTag(const FGameplayTag& InTag) {
}

void AMapSystemManager::AddMapElement(AActor* Actor, const FMapElement& MapElement, bool bDynamic) {
}

void AMapSystemManager::AddMapActor(AActor* Actor, const FMapElement& MapElement) {
}


