#include "SolsticeBuffBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

USolsticeBuffBase::USolsticeBuffBase() {
    this->BuffData = NULL;
    this->bIsAilment = false;
    this->bShouldSkipOnBatchRemove = false;
    this->DurationExpiredPolicy = EDurationExpiredPolicy::EDEP_Buff;
    this->bReplicates = false;
    this->DurationResets = 0;
    this->Instigator = NULL;
    this->Duration = 20.00f;
    this->DurationGroup = EBuffDuration::EBD_HasDuration;
    this->RemainingDuration = 0.00f;
    this->RemainingTickDuration = 0.00f;
    this->TickInterval = 1.00f;
    this->CurrentStacks = 0;
    this->MaximumStacks = 1;
    this->ExpectedRefreshInterval = 0.00f;
    this->bShouldRegisterDamageFunction = false;
    this->bDoNotRemoveGrantedTags = false;
    this->Icon = NULL;
    this->bShouldBeDisplayed = false;
    this->AppliedEffect = NULL;
    this->TickEffect = NULL;
    this->ActiveEffect = NULL;
    this->ExpiredEffect = NULL;
    this->StacksChangedEffect = NULL;
    this->AppliedSound = NULL;
    this->TickSound = NULL;
    this->ActiveSound = NULL;
    this->ExpiredSound = NULL;
    this->AppliedEffectReference = NULL;
    this->ActiveEffectReference = NULL;
    this->StacksChangedEffectReference = NULL;
    this->ActiveSoundReference = NULL;
}

void USolsticeBuffBase::UnregisterWeaponDamageMod() {
}

bool USolsticeBuffBase::ShouldRegisterWeaponDamageMod_Implementation(ASolsticeWeaponBase* Weapon) const {
    return false;
}

void USolsticeBuffBase::SetDurationGroup(EBuffDuration InDurationGroup, float InDuration) {
}

void USolsticeBuffBase::SetDuration(float InDuration) {
}

void USolsticeBuffBase::SetBuffToolTip(const FText& NewToolTipText) {
}

void USolsticeBuffBase::RegisterWeaponDamageMod() {
}



void USolsticeBuffBase::OnRep_DurationResets() {
}

void USolsticeBuffBase::OnRep_Duration(float OldDuration) {
}

FDamage USolsticeBuffBase::ModifyWeaponDamage_Implementation(const FDamage& InDamage) {
    return FDamage{};
}

FDamage USolsticeBuffBase::ModifyDamage_Implementation(const FDamage& InDamage) {
    return FDamage{};
}

TArray<FSolsticeAttributeModifier> USolsticeBuffBase::GetStackableAttributeModifiers() const {
    return TArray<FSolsticeAttributeModifier>();
}

float USolsticeBuffBase::GetRemainingTickDuration() const {
    return 0.0f;
}

float USolsticeBuffBase::GetRemainingDuration() const {
    return 0.0f;
}

int32 USolsticeBuffBase::GetMaximumStacks() const {
    return 0;
}

APawn* USolsticeBuffBase::GetInstigator() const {
    return NULL;
}

TArray<FSolsticeAttributeModifier> USolsticeBuffBase::GetFixedAttributeModifiers() const {
    return TArray<FSolsticeAttributeModifier>();
}

EBuffDuration USolsticeBuffBase::GetDurationGroup() const {
    return EBuffDuration::EBD_Instant;
}

float USolsticeBuffBase::GetDuration() const {
    return 0.0f;
}

int32 USolsticeBuffBase::GetCurrentStacks() const {
    return 0;
}

FBuffDescriptionRow USolsticeBuffBase::GetBuffDescriptionRowFor(TSubclassOf<USolsticeBuffBase> InBuffClass, bool& bRowExists) {
    return FBuffDescriptionRow{};
}

FBuffDataRow USolsticeBuffBase::GetBuffDataRowFor(TSubclassOf<USolsticeBuffBase> InBuffClass, bool& bRowExists) {
    return FBuffDataRow{};
}

TArray<FSolsticeAttributeModifier> USolsticeBuffBase::GetAttributeModifiersFor(TSubclassOf<USolsticeBuffBase> InBuffClass, int32 InStacks) {
    return TArray<FSolsticeAttributeModifier>();
}

TArray<FSolsticeAttributeModifier> USolsticeBuffBase::GetAttributeModifiers() {
    return TArray<FSolsticeAttributeModifier>();
}

AActor* USolsticeBuffBase::GetActorOwner() const {
    return NULL;
}

bool USolsticeBuffBase::CanTick_Implementation() const {
    return false;
}

bool USolsticeBuffBase::CanStack() const {
    return false;
}

bool USolsticeBuffBase::CanApplyBuff_Implementation(AActor* Target, int32& OutMaxStacksOverride) {
    return false;
}




bool USolsticeBuffBase::AffectsAttribute(EAttribute Attribute) const {
    return false;
}

bool USolsticeBuffBase::AffectsAnyAttribute() const {
    return false;
}

void USolsticeBuffBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USolsticeBuffBase, DurationResets);
    DOREPLIFETIME(USolsticeBuffBase, Instigator);
    DOREPLIFETIME(USolsticeBuffBase, Duration);
    DOREPLIFETIME(USolsticeBuffBase, DurationGroup);
    DOREPLIFETIME(USolsticeBuffBase, ExpectedRefreshInterval);
    DOREPLIFETIME(USolsticeBuffBase, AbilityOwner);
    DOREPLIFETIME(USolsticeBuffBase, AspectValues);
}


