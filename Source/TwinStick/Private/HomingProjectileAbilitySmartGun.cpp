#include "HomingProjectileAbilitySmartGun.h"
#include "Net/UnrealNetwork.h"

AHomingProjectileAbilitySmartGun::AHomingProjectileAbilitySmartGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreatingWeapon = NULL;
    this->HitMonsterParticle = NULL;
    this->HitObjectParticle = NULL;
    this->HitCharacterSound = NULL;
    this->HitObjectSound = NULL;
}

void AHomingProjectileAbilitySmartGun::SetCreatingWeapon(ASolsticeWeaponBase* InWeapon) {
}

void AHomingProjectileAbilitySmartGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHomingProjectileAbilitySmartGun, CreatingWeapon);
}


