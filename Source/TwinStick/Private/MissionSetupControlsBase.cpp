#include "MissionSetupControlsBase.h"

UMissionSetupControlsBase::UMissionSetupControlsBase() {
    this->SecondaryMissionSlider = NULL;
    this->AirSupportSlider = NULL;
    this->HordeControlSlider = NULL;
    this->ArtillerySupportSlider = NULL;
    this->InfestationLevelSlider = NULL;
    this->SecondaryMissionsText = NULL;
    this->AirSupportText = NULL;
    this->HordeControlText = NULL;
    this->ArtillerySupportText = NULL;
    this->InfestationLevelText = NULL;
    this->MissionSetupActor = NULL;
}


void UMissionSetupControlsBase::SetMissionSetupActor(AMissionSetupActor* InSetupActor) {
}



void UMissionSetupControlsBase::HandleSecondaryMissionFrequencyValueChanged(float InValue) {
}

void UMissionSetupControlsBase::HandleMSADifficultyChanged(EDifficulty NewDifficulty) {
}

void UMissionSetupControlsBase::HandleHordeControlValueChanged(float InValue) {
}

void UMissionSetupControlsBase::HandleArtillerySupportValueChanged(float InValue) {
}

void UMissionSetupControlsBase::HandleAirSupportValueChanged(float InValue) {
}

ARegion* UMissionSetupControlsBase::GetRegion() const {
    return NULL;
}

AStrategyMission* UMissionSetupControlsBase::GetMission() const {
    return NULL;
}

int32 UMissionSetupControlsBase::GetMaxSupplySlots() const {
    return 0;
}

int32 UMissionSetupControlsBase::GetMaximumSecondaryMissionFrequencySliderValue() const {
    return 0;
}

int32 UMissionSetupControlsBase::GetMaximumHordeArrivalSliderValue() const {
    return 0;
}

int32 UMissionSetupControlsBase::GetMaximumArtillerySupportSliderValue() const {
    return 0;
}

int32 UMissionSetupControlsBase::GetMaximumAirSupportSliderValue() const {
    return 0;
}

void UMissionSetupControlsBase::ClientHandleSecondaryMissionFrequencyChanged(ESecondaryMissionFrequency InFrequency) {
}

void UMissionSetupControlsBase::ClientHandleHordeControlValueChanged(EHordeArrivalTime InArrivalTime) {
}

void UMissionSetupControlsBase::ClientHandleArtillerySupportValueChanged(EArtillerySupportLevel InSupportLevel) {
}

void UMissionSetupControlsBase::ClientHandleAirSupportLevelChanged(EAirSupportLevel InSupportLevel) {
}


