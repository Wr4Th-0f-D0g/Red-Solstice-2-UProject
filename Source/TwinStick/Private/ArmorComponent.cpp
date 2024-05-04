#include "ArmorComponent.h"
#include "Net/UnrealNetwork.h"

UArmorComponent::UArmorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Armor = 0.00f;
    this->ArmorMax = 0.00f;
    this->ArmorRegeneration = 0.00f;
    this->bArmorRegenerating = true;
    this->ArmorBlocks = 0;
    this->ArmorBlocksMax = 0;
    this->ArmorPerBlock = 0.00f;
    this->ArmorBlockRegenerationTreshold = 0.99f;
    this->bSimulateDamageOnClient = false;
    this->ArmorShredSound = NULL;
    this->DamageTakenDestructive = 0.00f;
    this->DamageTakenEnergy = 0.00f;
    this->DamageTakenKinetic = 0.00f;
    this->ResistanceDestructive = 0.00f;
    this->ResistanceEnergy = 0.00f;
    this->ResistanceKinetic = 0.00f;
    this->OutOfArmorSound = NULL;
    this->bIsExposed = false;
}

void UArmorComponent::ShredBlocks(int32 Amount, APawn* DamageInstigator) {
}

void UArmorComponent::SetExposed(bool bExposed) {
}

void UArmorComponent::RestoreBlocks(int32 Amount, bool ModifyArmorValue) {
}

void UArmorComponent::ProcessDamage_Implementation(FDamage& DamageInfo) {
}

void UArmorComponent::OnRep_ReplicatedArmorDamage() {
}

void UArmorComponent::OnRep_ReplicatedArmorBlocksDamage() {
}

void UArmorComponent::OnRep_IsExposed() {
}

void UArmorComponent::OnRep_ArmorBlocks() {
}

void UArmorComponent::OnRep_Armor() {
}

float UArmorComponent::GetTopArmorBlockPercent() const {
    return 0.0f;
}

float UArmorComponent::GetTopArmorBlockArmor() const {
    return 0.0f;
}

float UArmorComponent::GetArmorRegeneration() const {
    return 0.0f;
}

float UArmorComponent::GetArmorPercent() const {
    return 0.0f;
}

float UArmorComponent::GetArmorPerBlock() const {
    return 0.0f;
}

float UArmorComponent::GetArmorMax() const {
    return 0.0f;
}

int32 UArmorComponent::GetArmorKineticResistance() const {
    return 0;
}

int32 UArmorComponent::GetArmorEnergyResistance() const {
    return 0;
}

int32 UArmorComponent::GetArmorDestructiveResistance() const {
    return 0;
}

int32 UArmorComponent::GetArmorBlocksMax() const {
    return 0;
}

int32 UArmorComponent::GetArmorBlocks() const {
    return 0;
}

float UArmorComponent::GetArmor() const {
    return 0.0f;
}

void UArmorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArmorComponent, Armor);
    DOREPLIFETIME(UArmorComponent, bArmorRegenerating);
    DOREPLIFETIME(UArmorComponent, ReplicatedArmorDamage);
    DOREPLIFETIME(UArmorComponent, ArmorBlocks);
    DOREPLIFETIME(UArmorComponent, ReplicatedArmorBlocksDamage);
    DOREPLIFETIME(UArmorComponent, bIsExposed);
}


