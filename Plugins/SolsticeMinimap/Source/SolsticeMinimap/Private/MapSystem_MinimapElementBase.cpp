#include "MapSystem_MinimapElementBase.h"

UMapSystem_MinimapElementBase::UMapSystem_MinimapElementBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CanvasSlot = NULL;
    this->bIsSizeOffset = false;
    this->MapManager = NULL;
    this->ObserverPawn = NULL;
    this->MinimapActor = NULL;
    this->bIsStatic = false;
    this->bCentralizedPlayer = false;
    this->ElementIcon = NULL;
    this->ElementPointerIcon = NULL;
    this->bShowIconOnMinimap = false;
    this->RangeIcon = NULL;
    this->bShowRadius = false;
    this->Radius = 0.00f;
    this->bHasRadiusShown = false;
    this->bIsMinimap = false;
    this->bFixedRotation = false;
    this->bAllowRotationChange = false;
    this->bAllowPointerRotationChange = false;
    this->bAlwaysVisibleInRange = false;
    this->VisibilityRadius = 0.00f;
    this->ElementImage = NULL;
}






AActor* UMapSystem_MinimapElementBase::GetMinimapActor() const {
    return NULL;
}


