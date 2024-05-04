#include "HUDPlayerList.h"

UHUDPlayerList::UHUDPlayerList() : UUserWidget(FObjectInitializer::Get()) {
    this->RefreshTime = 0.00f;
    this->HUDPlayerRowClass = NULL;
    this->PlayerListBox = NULL;
}


