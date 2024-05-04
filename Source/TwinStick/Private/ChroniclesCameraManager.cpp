#include "ChroniclesCameraManager.h"

AChroniclesCameraManager::AChroniclesCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->UltraWideFov = 101;
    this->NonUltraWideFov = 85;
    this->AspectRatioCheckTime = 2.00f;
}

void AChroniclesCameraManager::SetFovForCurrentResolutionRatio() {
}


