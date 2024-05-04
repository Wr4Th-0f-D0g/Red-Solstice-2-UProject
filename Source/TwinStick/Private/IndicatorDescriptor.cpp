#include "IndicatorDescriptor.h"

UIndicatorDescriptor::UIndicatorDescriptor() {
    this->bVisible = true;
    this->bClampToScreen = false;
    this->bShowClampToScreenArrow = false;
    this->bOverrideScreenPosition = false;
    this->bAutoRemoveWhenIndicatorComponentIsNull = false;
    this->ProjectionMode = EActorCanvasProjectionMode::ComponentPoint;
    this->HAlignment = HAlign_Center;
    this->VAlignment = VAlign_Center;
    this->Priority = 0;
    this->DataObject = NULL;
    this->Component = NULL;
}

void UIndicatorDescriptor::UnregisterIndicator() {
}

void UIndicatorDescriptor::SetWorldPositionOffset(FVector Offset) {
}

void UIndicatorDescriptor::SetVAlign(TEnumAsByte<EVerticalAlignment> InVAlignment) {
}

void UIndicatorDescriptor::SetShowClampToScreenArrow(bool bValue) {
}

void UIndicatorDescriptor::SetScreenSpaceOffset(FVector2D Offset) {
}

void UIndicatorDescriptor::SetSceneComponent(USceneComponent* InComponent) {
}

void UIndicatorDescriptor::SetProjectionMode(EActorCanvasProjectionMode InProjectionMode) {
}

void UIndicatorDescriptor::SetPriority(int32 InPriority) {
}

void UIndicatorDescriptor::SetIndicatorClass(TSoftClassPtr<UUserWidget> InIndicatorWidgetClass) {
}

void UIndicatorDescriptor::SetHAlign(TEnumAsByte<EHorizontalAlignment> InHAlignment) {
}

void UIndicatorDescriptor::SetDesiredVisibility(bool InVisible) {
}

void UIndicatorDescriptor::SetDataObject(UObject* InDataObject) {
}

void UIndicatorDescriptor::SetComponentSocketName(FName SocketName) {
}

void UIndicatorDescriptor::SetClampToScreen(bool bValue) {
}

void UIndicatorDescriptor::SetBoundingBoxAnchor(FVector InBoundingBoxAnchor) {
}

void UIndicatorDescriptor::SetAutoRemoveWhenIndicatorComponentIsNull(bool CanAutomaticallyRemove) {
}

FVector UIndicatorDescriptor::GetWorldPositionOffset() const {
    return FVector{};
}

TEnumAsByte<EVerticalAlignment> UIndicatorDescriptor::GetVAlign() const {
    return VAlign_Fill;
}

bool UIndicatorDescriptor::GetShowClampToScreenArrow() const {
    return false;
}

FVector2D UIndicatorDescriptor::GetScreenSpaceOffset() const {
    return FVector2D{};
}

USceneComponent* UIndicatorDescriptor::GetSceneComponent() const {
    return NULL;
}

EActorCanvasProjectionMode UIndicatorDescriptor::GetProjectionMode() const {
    return EActorCanvasProjectionMode::ComponentPoint;
}

int32 UIndicatorDescriptor::GetPriority() const {
    return 0;
}

bool UIndicatorDescriptor::GetIsVisible() const {
    return false;
}

TSoftClassPtr<UUserWidget> UIndicatorDescriptor::GetIndicatorClass() const {
    return NULL;
}

TEnumAsByte<EHorizontalAlignment> UIndicatorDescriptor::GetHAlign() const {
    return HAlign_Fill;
}

UObject* UIndicatorDescriptor::GetDataObject() const {
    return NULL;
}

FName UIndicatorDescriptor::GetComponentSocketName() const {
    return NAME_None;
}

bool UIndicatorDescriptor::GetClampToScreen() const {
    return false;
}

FVector UIndicatorDescriptor::GetBoundingBoxAnchor() const {
    return FVector{};
}

bool UIndicatorDescriptor::GetAutoRemoveWhenIndicatorComponentIsNull() const {
    return false;
}


