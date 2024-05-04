#include "VehicleModTooltipBase.h"
#include "Templates/SubclassOf.h"

UVehicleModTooltipBase::UVehicleModTooltipBase() : UUserWidget(FObjectInitializer::Get()) {
}

ASolsticeWeaponBase* UVehicleModTooltipBase::GetWeaponCDO(TSubclassOf<ASolsticeWeaponBase> WeaponClass) {
    return NULL;
}

FSolsticeVehicleModuleDescription UVehicleModTooltipBase::GetModDescription() const {
    return FSolsticeVehicleModuleDescription{};
}

FSolsticeVehicleModuleData UVehicleModTooltipBase::GetModData() const {
    return FSolsticeVehicleModuleData{};
}

UAbilityBase* UVehicleModTooltipBase::GetAbilityCDO(TSubclassOf<UAbilityBase> AbilityClass) const {
    return NULL;
}


