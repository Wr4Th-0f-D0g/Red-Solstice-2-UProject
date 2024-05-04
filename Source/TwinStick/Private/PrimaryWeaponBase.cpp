#include "PrimaryWeaponBase.h"
#include "WeaponTargetingLaserSpread.h"

APrimaryWeaponBase::APrimaryWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimComponent = CreateDefaultSubobject<UWeaponTargetingLaserSpread>(TEXT("Aim Component"));
    this->AimComponent->SetupAttachment(SkeletalMesh);
}


