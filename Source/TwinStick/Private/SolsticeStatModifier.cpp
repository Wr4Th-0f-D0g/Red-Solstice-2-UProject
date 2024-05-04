#include "SolsticeStatModifier.h"

FSolsticeStatModifier::FSolsticeStatModifier() {
    this->ModifierType = EStatModifierType::SMT_None;
    this->Value = 0.00f;
    this->Duration = 0.00f;
    this->StacksDuration = false;
    this->StacksIntensity = false;
}

