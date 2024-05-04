#include "RootMotionTask_RadialForce.h"
#include "Net/UnrealNetwork.h"

URootMotionTask_RadialForce::URootMotionTask_RadialForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocationActor = NULL;
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->Radius = 0.00f;
    this->bIsPush = false;
    this->bIsAdditive = false;
    this->bNoZForce = false;
    this->StrengthDistanceFalloff = NULL;
    this->StrengthOverTime = NULL;
    this->bUseFixedWorldDirection = false;
}

URootMotionTask_RadialForce* URootMotionTask_RadialForce::ApplyRootMotionRadialForce(UObject* WorldContextObject, FName TaskInstanceName, FVector NewLocation, AActor* NewLocationActor, float NewStrength, float NewDuration, float NewRadius, bool NewBIsPush, bool NewBIsAdditive, bool NewBNoZForce, UCurveFloat* NewStrengthDistanceFalloff, UCurveFloat* NewStrengthOverTime, bool NewBUseFixedWorldDirection, FRotator NewFixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
    return NULL;
}

void URootMotionTask_RadialForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionTask_RadialForce, Location);
    DOREPLIFETIME(URootMotionTask_RadialForce, LocationActor);
    DOREPLIFETIME(URootMotionTask_RadialForce, Strength);
    DOREPLIFETIME(URootMotionTask_RadialForce, Duration);
    DOREPLIFETIME(URootMotionTask_RadialForce, Radius);
    DOREPLIFETIME(URootMotionTask_RadialForce, bIsPush);
    DOREPLIFETIME(URootMotionTask_RadialForce, bIsAdditive);
    DOREPLIFETIME(URootMotionTask_RadialForce, bNoZForce);
    DOREPLIFETIME(URootMotionTask_RadialForce, StrengthDistanceFalloff);
    DOREPLIFETIME(URootMotionTask_RadialForce, StrengthOverTime);
    DOREPLIFETIME(URootMotionTask_RadialForce, bUseFixedWorldDirection);
    DOREPLIFETIME(URootMotionTask_RadialForce, FixedWorldDirection);
}


