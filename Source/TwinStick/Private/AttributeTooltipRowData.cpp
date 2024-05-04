#include "AttributeTooltipRowData.h"

FAttributeTooltipRowData::FAttributeTooltipRowData() {
    this->Icon = NULL;
    this->Attribute = EAttribute::EA_Invalid;
    this->ModifierType = EModifierType::EMT_None;
    this->Value = 0.00f;
}

