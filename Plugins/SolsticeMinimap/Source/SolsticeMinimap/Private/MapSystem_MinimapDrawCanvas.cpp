#include "MapSystem_MinimapDrawCanvas.h"

UMapSystem_MinimapDrawCanvas::UMapSystem_MinimapDrawCanvas() : UUserWidget(FObjectInitializer::Get()) {
    this->MapManager = NULL;
}

ACharacter* UMapSystem_MinimapDrawCanvas::GetPlayerCharacter() const {
    return NULL;
}


