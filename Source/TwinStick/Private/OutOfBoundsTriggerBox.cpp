#include "OutOfBoundsTriggerBox.h"

AOutOfBoundsTriggerBox::AOutOfBoundsTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportType = EOOBTeleportType::TeamAverage;
    this->OverlapType = EOOBTriggerBoxOverlapType::Timer;
    this->TimerTick = 0.20f;
    this->bDetectMonsters = false;
    this->bIgnoreBurrowingMonsters = true;
    this->bKillDetectedMonsters = true;
    this->FilterClass = NULL;
}

void AOutOfBoundsTriggerBox::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


