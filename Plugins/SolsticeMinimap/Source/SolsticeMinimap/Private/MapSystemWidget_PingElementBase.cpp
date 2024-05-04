#include "MapSystemWidget_PingElementBase.h"

UMapSystemWidget_PingElementBase::UMapSystemWidget_PingElementBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentMinimap = NULL;
}

void UMapSystemWidget_PingElementBase::SetPositionInCanvas(FVector2D PingLocation) {
}


UMapSystem_MinimapWidgetBase* UMapSystemWidget_PingElementBase::GetParentMinimap() const {
    return NULL;
}


