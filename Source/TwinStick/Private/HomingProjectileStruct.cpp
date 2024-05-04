#include "HomingProjectileStruct.h"

FHomingProjectileStruct::FHomingProjectileStruct() {
    this->LocationComponent = NULL;
    this->ProjectileParticle = NULL;
    this->AudioComponent = NULL;
    this->ProjectileMovement = NULL;
    this->HomeComponent = NULL;
    this->bCrashingToGround = false;
    this->bHasBegunDive = false;
    this->FlightTime = 0.00f;
    this->bTargetObstructed = false;
    this->BoolPayload = false;
    this->FloatPayload = 0.00f;
}

