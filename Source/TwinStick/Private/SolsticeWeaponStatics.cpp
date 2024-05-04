#include "SolsticeWeaponStatics.h"
#include "Templates/SubclassOf.h"

USolsticeWeaponStatics::USolsticeWeaponStatics() {
}

FCharacterWeaponData USolsticeWeaponStatics::MakeWeaponData(TSubclassOf<ASolsticeWeaponBase> WeaponClass) {
    return FCharacterWeaponData{};
}

bool USolsticeWeaponStatics::IsWeaponUpgradeAvailable(const UObject* WorldContextObject, FDataTableRowHandle UpgradeRowHandle) {
    return false;
}

bool USolsticeWeaponStatics::IsSecondaryWeapon(const FCharacterWeaponData& WeaponData) {
    return false;
}

bool USolsticeWeaponStatics::IsPrimaryWeapon(const FCharacterWeaponData& WeaponData) {
    return false;
}

bool USolsticeWeaponStatics::HasWeaponUpgradeOfType(const FCharacterWeaponData& WeaponData, EWeaponUpgradeType UpgradeType) {
    return false;
}

bool USolsticeWeaponStatics::HasLineOfSightToActor(const ASolsticeWeaponBase* InWeapon, const AActor* InTarget, float InRange, bool bDrawDebug) {
    return false;
}

bool USolsticeWeaponStatics::HasLineOfSight(const ASolsticeWeaponBase* InWeapon, const FVector& InLocation, float InRange, bool bDrawDebug) {
    return false;
}

FWeaponDescription USolsticeWeaponStatics::GetWeaponDescriptionFor(const FWeaponData& WeaponData) {
    return FWeaponDescription{};
}

FWeaponDescription USolsticeWeaponStatics::GetWeaponDescriptionByName(FName WeaponName) {
    return FWeaponDescription{};
}

TArray<TSubclassOf<UWeaponPassiveBuffBase>> USolsticeWeaponStatics::GetWeaponBuffs(const FCharacterWeaponData& WeaponData) {
    return TArray<TSubclassOf<UWeaponPassiveBuffBase>>();
}

FVector USolsticeWeaponStatics::GetShotOriginLocation(const ASolsticeWeaponBase* InWeapon) {
    return FVector{};
}

TSubclassOf<UFireComponentBase> USolsticeWeaponStatics::GetSecondaryFireModeClass(const FCharacterWeaponData& WeaponData) {
    return NULL;
}

TSubclassOf<UHitObjectBase> USolsticeWeaponStatics::GetSecondaryFireModeAdvancedAmmoClass(const FCharacterWeaponData& WeaponData) {
    return NULL;
}

TSubclassOf<UFireComponentBase> USolsticeWeaponStatics::GetSecondaryFireComponentClass(const FWeaponData& WeaponData) {
    return NULL;
}

TSubclassOf<UHitObjectBase> USolsticeWeaponStatics::GetSecondaryFireComponentAdvancedAmmoClass(const FWeaponData& WeaponData) {
    return NULL;
}

TSubclassOf<UFireComponentBase> USolsticeWeaponStatics::GetPrimaryFireComponentClass(const FWeaponData& WeaponData) {
    return NULL;
}

TSubclassOf<UHitObjectBase> USolsticeWeaponStatics::GetPrimaryFireComponentAdvancedAmmoClass(const FWeaponData& WeaponData) {
    return NULL;
}

FVector USolsticeWeaponStatics::GetMuzzleShotDirection(const ASolsticeWeaponBase* InWeapon) {
    return FVector{};
}

UParticleSystem* USolsticeWeaponStatics::GetMuzzleFlashSingleShotFX(FBulletEffects& BulletEffects) {
    return NULL;
}

UParticleSystem* USolsticeWeaponStatics::GetMuzzleFlashFX(FBulletEffects& BulletEffects) {
    return NULL;
}

TSubclassOf<UAbilityBase> USolsticeWeaponStatics::GetGrantedSkill(const FCharacterWeaponData& WeaponData) {
    return NULL;
}

bool USolsticeWeaponStatics::GetEquippedUpgradeOfType(const FCharacterWeaponData& WeaponData, EWeaponUpgradeType UpgradeType, FDataTableRowHandle& OutUpgradeHandle) {
    return false;
}

UMaterialInstance* USolsticeWeaponStatics::GetDecalMaterial(FBulletEffects& BulletEffects) {
    return NULL;
}

UParticleSystem* USolsticeWeaponStatics::GetBulletTrailFX(FBulletEffects& BulletEffects) {
    return NULL;
}

UParticleSystem* USolsticeWeaponStatics::GetBulletHitFX(FBulletEffects& BulletEffects) {
    return NULL;
}

TArray<FDataTableRowHandle> USolsticeWeaponStatics::GetAllWeaponUpgradeHandles(const FCharacterWeaponData& WeaponData) {
    return TArray<FDataTableRowHandle>();
}


