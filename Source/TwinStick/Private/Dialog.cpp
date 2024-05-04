#include "Dialog.h"

FDialog::FDialog() {
    this->bCanInterrupt = false;
    this->bCanBeInterrupted = false;
    this->CurrentLine = 0;
}

