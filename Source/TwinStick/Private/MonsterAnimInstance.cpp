#include "MonsterAnimInstance.h"

UMonsterAnimInstance::UMonsterAnimInstance() {
    this->IKTagAlpha = 1.00f;
    this->Pitch = 0.00f;
    this->bIKTagPresent = false;
    this->Monster = NULL;
    this->SpeedHorizontal = 0.00f;
    this->SpeedVertical = 0.00f;
    this->bStandingStill = false;
    this->SpeedNormalized = 0.00f;
    this->ActorYaw = 0.00f;
    this->DeathStartTime = 0.00f;
    this->bMonsterUsesTurnInPlace = false;
    this->ActorYawOffset = 0.00f;
    this->ActorYawOffsetReductionStartTime = 0.00f;
    this->ActorYawOffsetReductionCurrentTime = 0.00f;
    this->bTurningInPlace = false;
    this->bTurningInPlaceLeft = false;
    this->bTurnInPlaceComplete = false;
    this->RotateInPlace90R = NULL;
    this->RotateInPlace90L = NULL;
    this->HitReactAlpha = 0.00f;
    this->bHitReact = false;
    this->bNotifyFinishSpawning = false;
    this->bAttacking = false;
    this->bStunned = false;
    this->bDying = false;
    this->bDead = false;
    this->bStaggered = false;
    this->bEnraged = false;
    this->bRoaring = false;
    this->bKnockedBack = false;
    this->bFourLegs = false;
    this->bCharging = false;
    this->bWasFlyingLastFrame = false;
    this->bDeadWasFlying = false;
    this->NumLocos = 0;
    this->NumDeaths = 0;
    this->ChosenLoco = 0;
    this->RandomDeath = 0;
    this->Direction = 0.00f;
}


