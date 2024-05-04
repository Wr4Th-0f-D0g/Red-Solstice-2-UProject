#include "OptionsRelatedDefinitions.h"

UOptionsRelatedDefinitions::UOptionsRelatedDefinitions() {
    this->OptionMenuTextsDataTable = NULL;
    this->OptionsMenuControlNameTextsDataTable = NULL;
    this->DefaultOverallQuality = 3;
    this->DefaultVSyncEnabled = true;
    this->DefaultBrightness = 2.20f;
    this->DefaultResolutionScale = 1.00f;
    this->bDefaultLockCursor = true;
    this->AudioMasterDefault = 1.00f;
    this->AudioMusicDefault = 0.50f;
    this->AudioEffectsDefault = 0.65f;
    this->AudioDialogueDefault = 0.80f;
    this->AudioAmbianceDefault = 0.60f;
    this->BrightnessMax = 5.00f;
    this->BrightnessMin = 0.50f;
    this->ScrollSpeedMin = -1.00f;
    this->ScrollSpeedMax = 1.00f;
    this->ScrollSpeedMaxMultiplyer = 3.00f;
    this->CorpseDecompositionMin = 0.00f;
    this->CorpseDecompositionMax = 120.00f;
    this->DecalTimeoutMin = 0.00f;
    this->DecalTimeoutMax = 3.00f;
    this->GamepadSensitivityMin = 0.00f;
    this->GamepadSensitivityMax = 1.00f;
    this->GamepadCursorSpeedMin = 0.00f;
    this->GamepadCursorSpeedMax = 1.00f;
    this->TrottleSensitivityMin = 1000.00f;
    this->TrottleSensitivityMax = 15000.00f;
    this->bAutomaticallyGenerateSupportedLanguages = true;
    this->ConfigVersion = 0;
}


