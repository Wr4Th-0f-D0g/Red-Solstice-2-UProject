#include "VehicleWeaponBase.h"
#include "HeroSkillsComponent.h"
#include "Net/UnrealNetwork.h"

AVehicleWeaponBase::AVehicleWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponName = TEXT("DefaultWeapon");
    this->BaseMesh = NULL;
    this->TargetLocationFloorOffset = 0.00f;
    this->SkillsComponent = CreateDefaultSubobject<UHeroSkillsComponent>(TEXT("SkillsComponent"));
    this->OwningVehicle = NULL;
}


void AVehicleWeaponBase::OnRep_OwningVehicle() {
}


void AVehicleWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehicleWeaponBase, OwningVehicle);
}


