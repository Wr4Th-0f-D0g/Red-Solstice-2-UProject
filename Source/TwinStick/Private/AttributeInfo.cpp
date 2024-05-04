#include "AttributeInfo.h"

FAttributeInfo::FAttributeInfo() {
    this->Attribute = EAttribute::EA_Invalid;
    this->bHigherIsBetter = false;
    this->DecimalPlaces = 0;
    this->DefaultPreviewValue = 0.00f;
    this->Multiplier = 0.00f;
}

