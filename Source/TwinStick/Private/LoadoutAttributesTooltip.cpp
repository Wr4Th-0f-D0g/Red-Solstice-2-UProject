#include "LoadoutAttributesTooltip.h"

ULoadoutAttributesTooltip::ULoadoutAttributesTooltip() : UUserWidget(FObjectInitializer::Get()) {
}

bool ULoadoutAttributesTooltip::ModuleAffectsAttribute(EAttribute Attribute, const FEquippedModule& InModule) const {
    return false;
}

FSolsticeAttributeSources ULoadoutAttributesTooltip::GetTooltipRowsMk2(EAttribute Attribute) {
    return FSolsticeAttributeSources{};
}

FAttributeTooltipHelper ULoadoutAttributesTooltip::GetTooltipRows(EAttribute Attribute) {
    return FAttributeTooltipHelper{};
}


