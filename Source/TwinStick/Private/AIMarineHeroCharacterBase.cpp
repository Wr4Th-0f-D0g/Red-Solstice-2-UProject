#include "AIMarineHeroCharacterBase.h"
#include "ESolsticeSignificanceType.h"
#include "Net/UnrealNetwork.h"

AAIMarineHeroCharacterBase::AAIMarineHeroCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BrutalExplodeComponent = NULL;
    this->EnvironmentInteractionComponent = NULL;
    this->SignificanceType = ESolsticeSignificanceType::HeroAI;
    this->FlashLightAttachment = NULL;
    this->LocalInteractionBoxComp = NULL;
    this->ClientUXComponent = NULL;
    this->MyBotStatus = NULL;
    this->bFromSequencer = false;
    this->bUseCustomBotTag = false;
    this->bSetHiddenByDefault = false;
    this->bUsePowersuit = true;
    this->bPrePlaced = false;
    this->bOverridePassedInHeroDetails = false;
    this->bAlreadyPossessedOnce = false;
    this->bIsEvacuating = false;
    this->bCanEnterEvac = false;
    this->MeleeCheckTime = 0.30f;
    this->MeleeOverlapSphereRadius = 300.00f;
    this->OverrideBT = NULL;
    this->PremadeHeroName = TEXT("Assault");
    this->MarineDisplayName = FText::FromString(TEXT("KaosElite"));
    this->bHideCharacterNameWidget = false;
    this->AIMarineClass = ESolsticeHeroClass::ESHC_Assault;
    this->DefaultStartingAmmoPrimary = 0;
    this->DefaultStartingAmmoSecondary = 0;
    this->bRunBehaviourTreeDefault = true;
    this->InitialSkillsLevel = 1;
    this->bHideCharWidget = false;
    this->bReturnToInnerRadiusWhenAtOuterRadius = true;
    this->PatrolInnerRadius = -1.00f;
    this->PatrolOuterRadius = -1.00f;
    this->MaxMeleeRange = 300.00f;
    this->MeleePlayRate = 1.00f;
    this->bDebugAI = false;
}

void AAIMarineHeroCharacterBase::UseSecondaryWeaponForSetTime(const FVector& Location, float InDuration) {
}

void AAIMarineHeroCharacterBase::ToggleMeleeSkillEnabled(bool bEnabled) {
}

void AAIMarineHeroCharacterBase::SetCharacterWidgetVisible(bool bVisible) {
}

void AAIMarineHeroCharacterBase::OnRep_HideCharWidget() {
}

void AAIMarineHeroCharacterBase::NetMulticast_PlayTeleportEffects_Implementation(UFMODEvent* SoundEvent, UParticleSystem* Particle, const FVector_NetQuantize& Location) {
}


EEnemyThreatLevel AAIMarineHeroCharacterBase::GetThreatLevelEnum() const {
    return EEnemyThreatLevel::VeryLow;
}

bool AAIMarineHeroCharacterBase::GetReturnToInnerRadiusWhenAtOuterRadius() const {
    return false;
}

FGameplayTagContainer AAIMarineHeroCharacterBase::GetQueryTags() const {
    return FGameplayTagContainer{};
}

float AAIMarineHeroCharacterBase::GetPatrolOuterRadius() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetPatrolInnerRadius() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetPatrolIgnoreTraceRadius() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetMeleePlayRate() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetMaxMeleeRange() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetKillXP() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetKillDestroyTime() const {
    return 0.0f;
}

float AAIMarineHeroCharacterBase::GetHealthWidgetTimeOut() const {
    return 0.0f;
}

FText AAIMarineHeroCharacterBase::GetEnemyMarineName() const {
    return FText::GetEmpty();
}

TMap<EAttribute, FSolsticeAttributeData> AAIMarineHeroCharacterBase::GetEnemyMarineAttributes() const {
    return TMap<EAttribute, FSolsticeAttributeData>();
}

EBossType AAIMarineHeroCharacterBase::GetBossType() const {
    return EBossType::None;
}

bool AAIMarineHeroCharacterBase::CanAttackDoors() const {
    return false;
}

void AAIMarineHeroCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAIMarineHeroCharacterBase, bHideCharWidget);
}


