#include "ReplicatedHarvestItem.h"

FReplicatedHarvestItem::FReplicatedHarvestItem() {
    this->TargetActor = NULL;
    this->Instigator = NULL;
    this->InterpSpeed = 0.00f;
    this->BuffToApply = NULL;
    this->LivingTime = 0.00f;
    this->TestShape = EHarvestItemTestShape::Sphere;
    this->Radius = 0.00f;
    this->StackCount = 0;
    this->ParticleTemplate = NULL;
    this->StartTime = 0.00f;
    this->ParticleComp = NULL;
}

