#include "ReplicatedMontageInfo.h"

FReplicatedMontageInfo::FReplicatedMontageInfo() {
    this->AnimMontage = NULL;
    this->PlayRate = 0.00f;
    this->position = 0.00f;
    this->BlendTime = 0.00f;
    this->NextSectionID = 0;
    this->bIsStopped = false;
    this->bLocallyInitiated = false;
    this->ForcePlayBit = 0;
}

