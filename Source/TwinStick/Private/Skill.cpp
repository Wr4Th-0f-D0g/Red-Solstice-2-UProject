#include "Skill.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

USkill::USkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableUseOnTrain = false;
    this->SkillSlot = ESkillSlot::Main;
    this->MaximumLevel = 3;
    this->bCanEverLevelUp = true;
    this->bSkillDamaged = false;
    this->DamagedIcon = NULL;
    this->bIsPassiveSkill = false;
}



void USkill::SetSkillDamaged(bool NewDamaged) {
}

void USkill::SetLevelServer_Implementation(int32 Value) {
}

void USkill::SetLevel(int32 Value, bool& bSuccess) {
}

void USkill::ServerLevelUp_Implementation() {
}

void USkill::ServerLevelDown_Implementation() {
}



void USkill::OnRep_SkillDamaged() {
}


void USkill::LevelUp() {
}

void USkill::LevelDown() {
}


USkill* USkill::GetSkillCDO(TSubclassOf<USkill> Skill) {
    return NULL;
}

bool USkill::CanLevelUp() {
    return false;
}

bool USkill::CanLevelDown() {
    return false;
}

void USkill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USkill, MaximumLevel);
    DOREPLIFETIME(USkill, bSkillDamaged);
}


