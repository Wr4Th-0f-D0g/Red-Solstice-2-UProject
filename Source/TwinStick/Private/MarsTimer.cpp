#include "MarsTimer.h"

FMarsTimer::FMarsTimer() {
    this->bPaused = false;
    this->bLooping = false;
    this->TimerInterval = 0;
    this->WorldContextObject = NULL;
}

