#include "MissionDialog.h"

FMissionDialog::FMissionDialog() {
    this->ObjectiveIndex = 0;
    this->DialogType = EObjectiveDialogType::Start;
    this->bCanEverBeInterrupted = false;
    this->bCanInterrupt = false;
}

