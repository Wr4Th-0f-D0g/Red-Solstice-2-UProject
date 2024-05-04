#include "MarineBotSettings.h"

FMarineBotSettings::FMarineBotSettings() {
    this->bEnemyMarineIsReady = false;
    this->bUsesCustomMesh = false;
    this->bUsePowerSuitModel = false;
    this->InitialSkillsLevel = 0;
    this->DeadDestroyTime = 0.00f;
    this->BossType = EBossType::None;
    this->bReturnToInnerRadiusWhenAtOuterRadius = false;
    this->PatrolInnerRadius = 0.00f;
    this->PatrolOuterRadius = 0.00f;
    this->PatrolDistanceFromEnemyMarineToReturn = 0.00f;
    this->HitReactHealthDivision = 0.00f;
    this->HitReactDotAngle = 0.00f;
    this->HitReactDelayBetween = 0.00f;
    this->HitReactAlphaRangeA = 0.00f;
    this->HitReactAlphaRangeB = 0.00f;
    this->KillXP = 0.00f;
    this->ThreatLevel = EEnemyThreatLevel::VeryLow;
    this->ThreatValue = 0;
    this->HealthWidgetTimeout = 0.00f;
    this->bShowInBigMap = false;
    this->bShowInMinimap = false;
}

