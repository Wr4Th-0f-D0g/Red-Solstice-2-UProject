#include "PipeNetworkDestructor.h"

UPipeNetworkDestructor::UPipeNetworkDestructor() {
    this->OwningPipeNetwork = NULL;
    this->OtherPipeNetwork = NULL;
    this->Instigator = NULL;
}

UPipeNetworkDestructor* UPipeNetworkDestructor::StartPipeNetworkDestructor(UObject* WorldContextObject, APipeNetworkBase* OtherPipe, float DetonationTime, float DistanceBetweenExplosions, const FVector& DirectionOfPipe, bool bHalfRange, float Damage, float ExplosionStrength, APawn* NewInstigator) {
    return NULL;
}

void UPipeNetworkDestructor::DetonateRoad() {
}


