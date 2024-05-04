#include "CharacterSetupImportBase.h"

UCharacterSetupImportBase::UCharacterSetupImportBase() {
    this->MarineClassCode = TEXT("MaCl:");
    this->ModuleOffenseCode = TEXT("MO:");
    this->ModuleDefenseCode = TEXT("MD:");
    this->ModuleSupportCode = TEXT("MS:");
    this->ModuleMedalsCode = TEXT("MM:");
    this->PrimaryWeaponCode = TEXT("PW:");
    this->SecondaryWeaponCode = TEXT("SW:");
    this->PrimaryWeaponModCode = TEXT("PWM:");
    this->SecondaryWeaponModCode = TEXT("SWM:");
    this->PrimaryWeaponSkinCode = TEXT("PWS:");
    this->PrimaryWeaponPrimaryColorCode = TEXT("PWPC:");
    this->PrimaryWeaponSecondaryColorCode = TEXT("PWSC:");
    this->SecondaryWeaponSkinCode = TEXT("SWS:");
    this->SecondaryWeaponPrimaryColorCode = TEXT("SWPC:");
    this->SecondaryWeaponSecondaryColorCode = TEXT("SWSC:");
    this->MarineSkinCode = TEXT("MaS:");
    this->MarinePrimaryColorCode = TEXT("MaPC:");
    this->MarineSecondaryColorCode = TEXT("MaSC:");
    this->PropertyDelimiterCode = TEXT("|");
}

bool UCharacterSetupImportBase::TryToEquipImportCodeData(FCharacterImportCodeData ImportData) {
    return false;
}

void UCharacterSetupImportBase::PopulateWeaponMods(const TArray<FDataTableRowHandle> ModHandles, UHorizontalBox* NewParent) {
}

FDataTableRowHandle UCharacterSetupImportBase::ModDataHandleToModDescriptionHandle(const FDataTableRowHandle& InModDataHandle) {
    return FDataTableRowHandle{};
}

FCharacterImportCodeData UCharacterSetupImportBase::InputCodeToImportCodeData(const FString& InputString) {
    return FCharacterImportCodeData{};
}

FString UCharacterSetupImportBase::ExportCurrentLoadoutToString() {
    return TEXT("");
}

FDataTableRowHandle UCharacterSetupImportBase::ComponentStringToWeaponModRowHandle(const FString& ComponentString) {
    return FDataTableRowHandle{};
}


