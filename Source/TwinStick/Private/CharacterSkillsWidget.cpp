#include "CharacterSkillsWidget.h"

UCharacterSkillsWidget::UCharacterSkillsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EnergyBar = NULL;
    this->EnergyStances = NULL;
    this->EnergyStatusText = NULL;
    this->EnergyRegenRate = NULL;
    this->RTS_Controller = NULL;
    this->EnergyComponent = NULL;
    this->CurrentEnergyRegenRate = 0.00f;
    this->CurrentEnergyPercent = 0.00f;
    this->CurrentEnergy = 0.00f;
}

void UCharacterSkillsWidget::SetupWidget() {
}


