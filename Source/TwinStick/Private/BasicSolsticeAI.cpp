#include "BasicSolsticeAI.h"
#include "ECharacterType.h"
#include "ESolsticeSignificanceType.h"
#include "HeroMovementComponent.h"
#include "PowerSuitComponent.h"
#include "SolsticeWeaponComponent.h"

ABasicSolsticeAI::ABasicSolsticeAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHeroMovementComponent>(TEXT("CharMoveComp"))) {
    this->CharacterType = ECharacterType::ECT_BasicBot;
    this->BrutalExplodeComponent = NULL;
    this->AITargetAttachPoint = NULL;
    this->EnergyComponent = CreateDefaultSubobject<UPowerSuitComponent>(TEXT("EnergyComponent"));
    this->ActiveWeaponComponent = CreateDefaultSubobject<USolsticeWeaponComponent>(TEXT("TRS_WeaponComponent"));
    this->WeaponComponent = (USolsticeWeaponComponent*)ActiveWeaponComponent;
    this->EnvironmentInteractionComponent = NULL;
    this->SignificanceType = ESolsticeSignificanceType::BasicAI;
    this->MinLocationRoamRadius = 500.00f;
    this->MaxLocationRoamRadius = 1500.00f;
    this->MinPlayerRoamRadius = 500.00f;
    this->MaxPlayerRoamRadius = 1500.00f;
    this->CurrentState = EBasicAIMarineState::StandingIdle;
    this->RoamingPlayer = NULL;
    this->TempRoamingPlayer = NULL;
}


void ABasicSolsticeAI::SetTempRoamingPlayer(ASolsticeCharacterBase* InTempRoamingPlayer) {
}

void ABasicSolsticeAI::SetRoamingPlayerMinMaxRadius(float MinRadius, float MaxRadius) {
}

void ABasicSolsticeAI::SetRoamingLocationMinMaxRadius(const FVector& Location, float MinRadius, float MaxRadius) {
}

void ABasicSolsticeAI::SetCurrentState(EBasicAIMarineState NewState) {
}



