#include "AttributeModifierInfo.h"
#include "Templates/SubclassOf.h"

UAttributeModifierInfo::UAttributeModifierInfo() {
}

void UAttributeModifierInfo::SetBuffDescriptionRowHandle(TSubclassOf<USolsticeBuffBase> BuffClass, UDataTable* DataTable, FName RowName) {
}

void UAttributeModifierInfo::SetBuffDataRowHandle(TSubclassOf<USolsticeBuffBase> BuffClass, UDataTable* DataTable, FName RowName) {
}

void UAttributeModifierInfo::GetUpperClamp(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::GetStackingMultiplyBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::GetResistanceBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::GetMultiplyBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::GetLowerClamp(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::GetFlatBonus(const FSolsticeAttributeModifier& Modifier, float& OutValue, bool& HasBonus) {
}

void UAttributeModifierInfo::AddBuffDescriptionRow(UDataTable* DataTable, FName RowName, const FBuffDescriptionRow& Data) {
}

void UAttributeModifierInfo::AddBuffDataRow(UDataTable* DataTable, FName RowName, const FBuffDataRow& Data) {
}


