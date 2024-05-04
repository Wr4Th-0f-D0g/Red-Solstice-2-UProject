#include "BTService_MonitorPatrolRange.h"

UBTService_MonitorPatrolRange::UBTService_MonitorPatrolRange() {
    this->NodeName = TEXT("Monitor patrol range");
    this->SolsticeCharacter = NULL;
    this->SolsticeController = NULL;
    this->AdjTraceDebugType = ESolsticeDebugTraceType::None;
    this->DebugDuration = 0.00f;
    this->ReturnHomeCooldown = 5.00f;
    this->DisableOptimizeDistance = 5000.00f;
    this->bTraceForTarget = true;
}

void UBTService_MonitorPatrolRange::MonsterPerceptionDetected(AActor* Actor, FAIStimulus Stimulus) {
}


