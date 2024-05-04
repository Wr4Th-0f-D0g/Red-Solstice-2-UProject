#include "MechAnimInstance.h"

UMechAnimInstance::UMechAnimInstance() {
    this->bIsDead = false;
    this->SpeedHorizontal = 0.00f;
    this->SpeedVertical = 0.00f;
    this->bStandingStill = false;
    this->SpeedNormalized = 0.00f;
    this->ActorYaw = 0.00f;
    this->Direction = 0.00f;
    this->UpperBodyGoalRot = 0.00f;
    this->UpperBodyRotDifference = 0.00f;
    this->AimDirection = 0.00f;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->ActorYawOffset = 0.00f;
    this->ActorYawOffsetReductionStartTime = 0.00f;
    this->ActorYawOffsetReductionCurrentTime = 0.00f;
    this->bTurningInPlace = false;
    this->bTurningInPlaceLeft = false;
    this->bTurnInPlaceComplete = false;
    this->RotateInPlace90R = NULL;
    this->RotateInPlace90L = NULL;
}


