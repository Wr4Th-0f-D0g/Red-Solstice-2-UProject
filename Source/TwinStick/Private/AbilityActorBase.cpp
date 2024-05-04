#include "AbilityActorBase.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AAbilityActorBase::AAbilityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));
    this->bEnableSignificanceManagement = false;
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->AbilityActorLevel = 1;
    this->bInitialDormant = false;
    this->AspectPrefix = TEXT("Item");
    this->RealDamageSourceClass = NULL;
    this->InteractableComponent = NULL;
    this->AttributeComponent = NULL;
    this->ArmorComponent = NULL;
    this->HealthComponentA = NULL;
    this->DamageComponent = NULL;
    this->EnergyComponent = NULL;
    this->MinimumDamageMultiplier = 0.50f;
    this->PlayerDamageMultiplier = 0.70f;
    this->ExplosionDamageMultiplier = 1.00f;
    this->DamageType = EDamageGroup::EDT_Destructive;
}

UActionObjectExplode* AAbilityActorBase::SpawnExplosionObject(const FTransform& Transform, bool bIgnoreInstigator, FVector Normal) {
    return NULL;
}

AAbilityActorBase* AAbilityActorBase::SpawnAbilityActorWithTarget(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform, FVector_NetQuantize10 InTargetLocation) {
    return NULL;
}

AAbilityActorBase* AAbilityActorBase::SpawnAbilityActor(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform) {
    return NULL;
}

bool AAbilityActorBase::ShouldManageSignificance() const {
    return false;
}

void AAbilityActorBase::SetTeam(ESolsticeTeam InTeam) {
}

void AAbilityActorBase::OnRep_AbilityActorLevel() {
}

void AAbilityActorBase::LoadAspectsDataForLevel(int32 AspectLevel) {
}

void AAbilityActorBase::HandleInteractionStarted(APawn* InteractionInstigator) {
}

void AAbilityActorBase::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& InteractionInstigators, bool bSuccess) {
}

void AAbilityActorBase::HandleInteractionAborted(APawn* InteractionInstigator) {
}

void AAbilityActorBase::HandleAttributeValueChanged(EAttribute InAttribute, float OldValue, float NewValue) {
}

void AAbilityActorBase::HandleActorKilled(AActor* InActor, const FDamage& InDamage, bool bRecentlyDied) {
}

void AAbilityActorBase::HandleActorDamaged(AActor* InActor, const FDamage& InDamage) {
}

ESolsticeTeam AAbilityActorBase::GetTeam() const {
    return ESolsticeTeam::HeroMarine;
}

UClass* AAbilityActorBase::GetRealDamageSource_Implementation() const {
    return NULL;
}

float AAbilityActorBase::GetPreviousSignificance() const {
    return 0.0f;
}

FVector AAbilityActorBase::GetNormalAtImpactPoint() const {
    return FVector{};
}

FExplosionEffects AAbilityActorBase::GetExplosionEffects_Implementation() const {
    return FExplosionEffects{};
}

FExplosionDecal AAbilityActorBase::GetExplosionDecal_Implementation() const {
    return FExplosionDecal{};
}

FExplosionDamage AAbilityActorBase::GetExplosionDamage_Implementation() const {
    return FExplosionDamage{};
}

float AAbilityActorBase::GetCurrentSignificance() const {
    return 0.0f;
}

FAspectValueSet AAbilityActorBase::GetAspectValueSet() const {
    return FAspectValueSet{};
}

void AAbilityActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityActorBase, TargetLocation);
    DOREPLIFETIME(AAbilityActorBase, AbilityOwner);
    DOREPLIFETIME(AAbilityActorBase, AspectValues);
    DOREPLIFETIME(AAbilityActorBase, AbilityActorLevel);
    DOREPLIFETIME(AAbilityActorBase, TeamID);
}


