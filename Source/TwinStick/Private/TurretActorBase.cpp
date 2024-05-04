#include "TurretActorBase.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"
#include "ArmorComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverwatchComponent.h"
#include "Templates/SubclassOf.h"

ATurretActorBase::ATurretActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SignificanceTag = TEXT("Turret");
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->ArmorComponent = CreateDefaultSubobject<UArmorComponent>(TEXT("ArmorComponent"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BuildableMeshes.AddDefaulted(2);
    this->bDebugLogTargeting = false;
    this->bDebugLogHits = false;
    this->bDebugDrawTraces = false;
    this->DrawDebugTime = 1.00f;
    this->Base = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Base"));
    this->Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
    this->GunDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("GunDirection"));
    this->TargetingOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("TargetingOrigin"));
    this->OverwatchComponent = CreateDefaultSubobject<UOverwatchComponent>(TEXT("OverwatchComponent"));
    this->MuzzleVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleVFX"));
    this->ShellEjectionVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ShellEjection"));
    this->FireAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FireAC"));
    this->FireEffectAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FireEffectAC"));
    this->RotationAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("RotationAC"));
    this->HitAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("HitAC"));
    this->ShellEjectionEffect = NULL;
    this->FireSound = NULL;
    this->FireEffectSound = NULL;
    this->RotationSound = NULL;
    this->WeaponSkill = NULL;
    this->HorizontalMoveComp = NULL;
    this->VerticalMoveComp = NULL;
    this->bFiring = false;
    this->bTurretEnabled = true;
    this->OverwatchTarget = NULL;
    this->PenetrationMode = EWeaponPenetrationMode::EWPM_None;
    this->AdvancedAmmoClass = NULL;
    this->AdvancedAmmo = NULL;
    this->ClipsSpentPerReload = 1;
    this->InteractionRange = 300.00f;
    this->bRequiresAmmoToFire = false;
    this->bTargetFeet = false;
    this->bIdleRotate = true;
    this->bDamageNeutral = false;
    this->RotateAngle = 45.00f;
    this->RotationAllignmentAngle = 5.00f;
    this->bReceivesDamage = true;
    this->IdleSpeedMin = 15.00f;
    this->IdleSpeedMax = 25.00f;
    this->bUseWeaponSkill = false;
    this->bUseCustomFiringLogic = false;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->DamageComponent->SetupAttachment(RootComponent);
    this->Base->SetupAttachment(RootComponent);
    this->Body->SetupAttachment(Base);
    this->GunDirection->SetupAttachment(Body);
    this->TargetingOrigin->SetupAttachment(Body);
    this->MuzzleVFX->SetupAttachment(Body);
    this->ShellEjectionVFX->SetupAttachment(Body);
    this->FireAC->SetupAttachment(RootComponent);
    this->FireEffectAC->SetupAttachment(RootComponent);
    this->RotationAC->SetupAttachment(RootComponent);
}

void ATurretActorBase::SetReceivesDamage(bool bInReceivesDamage) {
}

void ATurretActorBase::SetPriorityTarget(AActor* InTarget) {
}

void ATurretActorBase::SetNavAffectEnabled(bool InAffectsNavigation) {
}

void ATurretActorBase::SetHorizontalVerticalMoveComponents(USceneComponent* InHorizontalMoveComp, USceneComponent* InVerticalMoveComp) {
}

void ATurretActorBase::SetAdvancedAmmoClass(TSubclassOf<UHitObjectBase> NewClass, bool SkipEqualsCheck) {
}

void ATurretActorBase::RemoveShotIgnoredActor(AActor* InActor) {
}

void ATurretActorBase::RemoveIgnoredCollisionActor(AActor* InActor) {
}

void ATurretActorBase::Reload(int32 InClips, int32& OutOverflow) {
}

void ATurretActorBase::PlayVFX_Implementation() {
}

void ATurretActorBase::PlayTurretBulletFX_Implementation(const FHitResult& HitResult, const FVector& Origin, const FVector& Direction, const float Range) {
}



void ATurretActorBase::OnRep_TurretClip() {
}

void ATurretActorBase::OnRep_OverwatchTarget(AActor* OldValue) {
}

void ATurretActorBase::OnRep_Firing(bool OldValue) {
}

void ATurretActorBase::OnRep_bTurretEnabled() {
}

void ATurretActorBase::OnRep_AdvancedAmmoClass(TSubclassOf<UHitObjectBase> OldClass) {
}



bool ATurretActorBase::IsFullyLoaded() const {
    return false;
}

bool ATurretActorBase::IsEmpty() const {
    return false;
}


void ATurretActorBase::HandleOverwatchTargetSelected(AActor* InOverwatchTarget, AActor* OldTarget) {
}

void ATurretActorBase::HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation ChangedOperation) {
}

FVector ATurretActorBase::GetTargetingOrigin_Implementation() {
    return FVector{};
}

FVector ATurretActorBase::GetTargetingDirection_Implementation() {
    return FVector{};
}

bool ATurretActorBase::GetTargetAttackLocation(FVector& OutLocation) const {
    return false;
}

AActor* ATurretActorBase::GetOverwatchTarget() const {
    return NULL;
}

int32 ATurretActorBase::GetMaxClips() const {
    return 0;
}

int32 ATurretActorBase::GetMaxAmmo() const {
    return 0;
}

int32 ATurretActorBase::GetCurrentAmmo() const {
    return 0;
}

int32 ATurretActorBase::GetClipsForFullReload() const {
    return 0;
}

int32 ATurretActorBase::GetAmmoPerClip() const {
    return 0;
}

float ATurretActorBase::GetAmmoPercent() const {
    return 0.0f;
}


void ATurretActorBase::EnableTurret() {
}

void ATurretActorBase::DisableTurret() {
}

void ATurretActorBase::DisableTick() {
}

void ATurretActorBase::CustomFire_Implementation() {
}

void ATurretActorBase::ClearPriorityTarget() {
}

void ATurretActorBase::CeaseVFX_Implementation() {
}


bool ATurretActorBase::CanRotateToTarget_Implementation() const {
    return false;
}

bool ATurretActorBase::CanFire_Implementation() const {
    return false;
}

void ATurretActorBase::AddShotIgnoredActor(AActor* InActor) {
}

void ATurretActorBase::AddIgnoredCollisionActor(AActor* InActor) {
}

void ATurretActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATurretActorBase, bFiring);
    DOREPLIFETIME(ATurretActorBase, bTurretEnabled);
    DOREPLIFETIME(ATurretActorBase, OverwatchTarget);
    DOREPLIFETIME(ATurretActorBase, AdvancedAmmoClass);
    DOREPLIFETIME(ATurretActorBase, TurretClip);
    DOREPLIFETIME(ATurretActorBase, bReceivesDamage);
}


