#include "HeroAnimInstance.h"

UHeroAnimInstance::UHeroAnimInstance() {
    this->bManual = false;
    this->bIsAssault = false;
    this->bIsCombatState = false;
    this->bIsShooting = false;
    this->bIsDead = false;
    this->bIsSnatcherPinned = false;
    this->bIsAiming = false;
    this->bIsBarrelHeld = false;
    this->bKnockedDown = false;
    this->bDeadOrPinned = false;
    this->bNotDeadOrPinned = false;
    this->bExecuted = false;
    this->bUsingZipline = false;
    this->bLimping = false;
    this->bUsingRopePickup = false;
    this->bHoldingBarrel = false;
    this->bHoldingPosition = false;
    this->bSniperOrStandingStillCrouch = false;
    this->SpeedHorizontal = 0.00f;
    this->SpeedVertical = 0.00f;
    this->bStandingStill = false;
    this->SpeedNormalized = 0.00f;
    this->ActorYaw = 0.00f;
    this->bIsStationaryAiming = false;
    this->LocomotionMode = ELocomotionMode::ELM_None;
    this->Direction = 0.00f;
    this->UpperBodyGoalRot = 0.00f;
    this->UpperBodyRotDifference = 0.00f;
    this->AimDirection = 0.00f;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->ExecuteType = EHeroExecutedType::None;
    this->ActorYawOffset = 0.00f;
    this->ActorYawOffsetReductionStartTime = 0.00f;
    this->ActorYawOffsetReductionCurrentTime = 0.00f;
    this->bTurningInPlace = false;
    this->bTurningInPlaceLeft = false;
    this->bTurnInPlaceComplete = false;
    this->RotateInPlace90R = NULL;
    this->RotateInPlace90L = NULL;
    this->Character = NULL;
    this->WeaponComponent = NULL;
}

void UHeroAnimInstance::SetCharacter(ASolsticeCharacterBase* InCharacter) {
}

AHeroCharacterBase* UHeroAnimInstance::GetHero() {
    return NULL;
}

ASolsticeCharacterBase* UHeroAnimInstance::GetCharacter() {
    return NULL;
}

void UHeroAnimInstance::CallFootstep() {
}


