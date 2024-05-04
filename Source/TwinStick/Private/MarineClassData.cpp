#include "MarineClassData.h"
#include "Templates/SubclassOf.h"

UMarineClassData::UMarineClassData() {
    this->MarineClass = ESolsticeHeroClass::ESHC_Invalid;
    this->bMarineClassEnabled = true;
    this->RequiredRank = 1;
    this->DLCRequirementCode = 0;
    this->DefaultSuitTier = ESuitTier::MarkVI;
    this->CachedIdentifier = 0;
}

bool UMarineClassData::IsMarineClassEnabled() const {
    return false;
}

FSuitDescription UMarineClassData::GetSuitDescription() const {
    return FSuitDescription{};
}

TArray<TSubclassOf<ASecondaryWeaponBase>> UMarineClassData::GetRandomSecondaryWeaponArray() const {
    return TArray<TSubclassOf<ASecondaryWeaponBase>>();
}

TArray<TSubclassOf<APrimaryWeaponBase>> UMarineClassData::GetRandomPrimaryWeaponArray() const {
    return TArray<TSubclassOf<APrimaryWeaponBase>>();
}

TSubclassOf<ASecondaryWeaponBase> UMarineClassData::GetDefaultSecondaryWeaponClass() const {
    return NULL;
}

FLinearColor UMarineClassData::GetDefaultSecondaryColor(ESuitTier SuitTier) const {
    return FLinearColor{};
}

TSubclassOf<APrimaryWeaponBase> UMarineClassData::GetDefaultPrimaryWeaponClass() const {
    return NULL;
}

FLinearColor UMarineClassData::GetDefaultPrimaryColor(ESuitTier SuitTier) const {
    return FLinearColor{};
}

UTexture2D* UMarineClassData::GetClassIcon() const {
    return NULL;
}


