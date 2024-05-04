#include "HeroSkillsComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UHeroSkillsComponent::UHeroSkillsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainSkillCount = 4;
    this->UtilitySkillCount = 2;
    this->MainSkillClasses.AddDefaulted(4);
    this->UtilitySkillClasses.AddDefaulted(2);
    this->MainSkillInstances.AddDefaulted(4);
    this->UtilitySkillInstances.AddDefaulted(2);
}

void UHeroSkillsComponent::SetSkillInSlot_Implementation(int32 InSlotIndex, TSubclassOf<USkill> InSkillClass, ESkillSlot InSkillSlot, AActor* OwnerOverride) {
}

void UHeroSkillsComponent::ServerSwapUtilitySkills_Implementation(int32 FirstIndex, int32 SecondIndex) {
}

void UHeroSkillsComponent::ServerSwapMainSkills_Implementation(int32 FirstIndex, int32 SecondIndex) {
}

void UHeroSkillsComponent::RepairAllSkills() {
}

void UHeroSkillsComponent::OnRep_UtilitySkillInstances(TArray<USkill*> OldSkills) {
}

void UHeroSkillsComponent::OnRep_NativeSkillInstances() {
}

void UHeroSkillsComponent::OnRep_MainSkillInstances(TArray<USkill*> OldSkills) {
}

bool UHeroSkillsComponent::IsValidSkill(ESkillSlot InSlot, int32 InSlotIndex) const {
    return false;
}

bool UHeroSkillsComponent::IsSkillInstanceInSlotActive(int32 InSlotIndex, ESkillSlot InSkillSlot) const {
    return false;
}

bool UHeroSkillsComponent::HasSkill(TSubclassOf<USkill> InClass) const {
    return false;
}

void UHeroSkillsComponent::HandleSkillLevelChanged(int32 NewLevel) {
}

void UHeroSkillsComponent::HandleAbilityFinished(UAbilityBase* InAbility, const FGameplayTag& InAbilityTag) {
}

TArray<USkill*> UHeroSkillsComponent::GetUtilitySkillInstances() const {
    return TArray<USkill*>();
}

int32 UHeroSkillsComponent::GetUtilitySkillCount() const {
    return 0;
}

TArray<TSubclassOf<USkill>> UHeroSkillsComponent::GetUtilitySkillClasses() const {
    return TArray<TSubclassOf<USkill>>();
}

USkill* UHeroSkillsComponent::GetSkillInstanceInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const {
    return NULL;
}

TSubclassOf<USkill> UHeroSkillsComponent::GetSkillClassInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const {
    return NULL;
}

USkill* UHeroSkillsComponent::GetSkillByTag(const FGameplayTag& SkillTag) {
    return NULL;
}

USkill* UHeroSkillsComponent::GetMappedSkillInstanceInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const {
    return NULL;
}

TSubclassOf<USkill> UHeroSkillsComponent::GetMappedSkillClassInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const {
    return NULL;
}

TArray<USkill*> UHeroSkillsComponent::GetMainSkillInstances() const {
    return TArray<USkill*>();
}

int32 UHeroSkillsComponent::GetMainSkillCount() const {
    return 0;
}

TArray<TSubclassOf<USkill>> UHeroSkillsComponent::GetMainSkillClasses() const {
    return TArray<TSubclassOf<USkill>>();
}

int32 UHeroSkillsComponent::GetIndexForSkillInstance(USkill* InInstance) const {
    return 0;
}

int32 UHeroSkillsComponent::GetIndexForSkill(TSubclassOf<USkill> InClass) const {
    return 0;
}

int32 UHeroSkillsComponent::GetFirstAvailableIndexForSlot(ESkillSlot InSlot) const {
    return 0;
}

TArray<USkill*> UHeroSkillsComponent::GetBotFilteredUtilitySkills(bool bNotCooldown, bool bHasEnergy, bool bPassiveSkill, bool bToggleSkill, bool bFriendlyUseSkill) const {
    return TArray<USkill*>();
}

TArray<USkill*> UHeroSkillsComponent::GetBotFilteredMainSkills(bool bNotCooldown, bool bHasEnergy, bool bPassiveSkill, bool bToggleSkill, bool bFriendlyUseSkill) const {
    return TArray<USkill*>();
}

void UHeroSkillsComponent::DeactivateSkill(ESkillSlot InSlot, int32 InSlotIndex) {
}

void UHeroSkillsComponent::ActivateSkill(ESkillSlot InSlot, int32 InSlotIndex) {
}

void UHeroSkillsComponent::AbortSkillInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) {
}

void UHeroSkillsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeroSkillsComponent, MainSkillClasses);
    DOREPLIFETIME(UHeroSkillsComponent, UtilitySkillClasses);
    DOREPLIFETIME(UHeroSkillsComponent, NativeSkillClasses);
    DOREPLIFETIME(UHeroSkillsComponent, NativeSkillInstances);
    DOREPLIFETIME(UHeroSkillsComponent, MainSkillInstances);
    DOREPLIFETIME(UHeroSkillsComponent, UtilitySkillInstances);
}


