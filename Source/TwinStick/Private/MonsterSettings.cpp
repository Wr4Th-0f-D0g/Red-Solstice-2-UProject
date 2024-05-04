#include "MonsterSettings.h"

FMonsterSettings::FMonsterSettings() {
    this->bMonsterIsReady = false;
    this->DeadDestroyTime = 0.00f;
    this->MonsterSize = EMonsterSizeClass::Tiny;
    this->MonsterType = EMonsterType::Standard;
    this->BossType = EBossType::None;
    this->EvadeChance = 0.00f;
    this->bReturnToInnerRadiusWhenAtOuterRadius = false;
    this->PatrolInnerRadius = 0.00f;
    this->PatrolOuterRadius = 0.00f;
    this->PatrolDistanceFromMonsterToReturn = 0.00f;
    this->HitReactHealthDivision = 0.00f;
    this->HitReactDotAngle = 0.00f;
    this->HitReactDelayBetween = 0.00f;
    this->HitReactAlphaRangeA = 0.00f;
    this->HitReactAlphaRangeB = 0.00f;
    this->MonsterKillXP = 0.00f;
    this->ThreatLevel = EEnemyThreatLevel::VeryLow;
    this->ThreatValue = 0;
    this->HealthWidgetTimeout = 0.00f;
    this->bShowInBigMap = false;
    this->bShowInMinimap = false;
}

