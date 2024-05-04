#include "SolsticeVehicleDataAsset.h"
#include "Templates/SubclassOf.h"

USolsticeVehicleDataAsset::USolsticeVehicleDataAsset() {
    this->VehicleModificationTable = NULL;
    this->VehicleModificationDescriptionsTable = NULL;
    this->DefaultVehicleTable = NULL;
    this->VehicleDescriptionsTable = NULL;
}

FGameplayTagContainer USolsticeVehicleDataAsset::GetVehicleModuleTagsForCategoryAndVehicleTag(ESolsticeVehicleModuleCategory ModuleCategory, FGameplayTag VehicleTag, bool bExcludeDefaultModules) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer USolsticeVehicleDataAsset::GetVehicleModuleTagsForCategoryAndVehicle(ESolsticeVehicleModuleCategory ModuleCategory, const FSolsticeVehicleData& DefaultVehicleData, bool bExcludeDefaultModules) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer USolsticeVehicleDataAsset::GetVehicleModuleTagsForCategory(ESolsticeVehicleModuleCategory ModuleCategory) const {
    return FGameplayTagContainer{};
}

TArray<FSolsticeVehicleModuleData> USolsticeVehicleDataAsset::GetVehicleModulesForCategoryAndVehicleTag(ESolsticeVehicleModuleCategory ModuleCategory, FGameplayTag VehicleTag) const {
    return TArray<FSolsticeVehicleModuleData>();
}

TArray<FSolsticeVehicleModuleData> USolsticeVehicleDataAsset::GetVehicleModulesForCategoryAndVehicle(ESolsticeVehicleModuleCategory ModuleCategory, TSubclassOf<ASolsticeDrivableVehicle> VehicleClass) const {
    return TArray<FSolsticeVehicleModuleData>();
}

TArray<FSolsticeVehicleModuleData> USolsticeVehicleDataAsset::GetVehicleModulesForCategory(ESolsticeVehicleModuleCategory ModuleCategory) const {
    return TArray<FSolsticeVehicleModuleData>();
}

TArray<ESolsticeVehicleModuleCategory> USolsticeVehicleDataAsset::GetAllVehicleModuleCategories() const {
    return TArray<ESolsticeVehicleModuleCategory>();
}


