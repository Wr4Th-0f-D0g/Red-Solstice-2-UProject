#include "RTS_HUD_Base.h"

ARTS_HUD_Base::ARTS_HUD_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bHUDHidden = false;
    this->bHUDTurnedOffByPlayer = false;
    this->bDisableHUDEnable = false;
    this->MainHUDWidget = NULL;
    this->MissionWaypointArrowActor = NULL;
}



AMissionWaypointArrows* ARTS_HUD_Base::SpawnMissionWayPointArrows_Implementation() {
    return NULL;
}













void ARTS_HUD_Base::SetHUDTurnedOffByPlayer(bool bNewOff) {
}

void ARTS_HUD_Base::SetHUDHidden(bool bNewHidden, bool bToggleMinimap) {
}









bool ARTS_HUD_Base::IsHUDHidden() const {
    return false;
}


void ARTS_HUD_Base::InitializeMinimapForHUD() {
}

void ARTS_HUD_Base::InitializeHUD_Implementation() {
}



bool ARTS_HUD_Base::HandleMinimapAddToViewport(UMapSystem_MinimapWidgetBase* MapWidget) {
    return false;
}














