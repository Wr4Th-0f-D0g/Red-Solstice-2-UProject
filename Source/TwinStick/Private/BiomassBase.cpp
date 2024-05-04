#include "BiomassBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ABiomassBase::ABiomassBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MeshComponent = NULL;
    this->Hero = NULL;
    this->BiomassRadius = 6000.00f;
    this->BiomassSpreadTimerInterval = 2.00f;
    this->BiomassSpreadSpeed = 30.00f;
    this->BiomassSpreadMinRadius = 13000.00f;
    this->BiomassMaxValueBeforeSpread = 8000.00f;
    this->SpreadToSectorPercent = -1.00f;
    this->GameDifficultyModifier = 6.00f;
    this->BiomassSpreadMinRadiusMod = 3000.00f;
    this->DistanceToBiomass = 0.00f;
    this->BiomassRadiusSpawnCost = 70.00f;
    this->bPlayerInBiomassRadius = false;
    this->bIsAnyPlayerInBiomass = false;
    this->SpawnMonsterWaveTimerInterval = 5.00f;
    this->SpawnMonsterWaveTimerIntervalMax = 3.00f;
    this->SpawnMonsterWaveTimerIntervalMin = 1.50f;
    this->BiomassMonsterSpawnFilter = NULL;
    this->SpawnMonsterWaveTimerIntervalChange = 0.05f;
    this->SpawnMonsterTimerInterval = 0.15f;
    this->MinSpawnRange = 1000;
    this->MaxSpawnRange = 1300;
    this->MaxMonsters = 15;
}



void ABiomassBase::SpreadBiomass() {
}

void ABiomassBase::SpawnMonsterWave() {
}

void ABiomassBase::SpawnMonster() {
}

void ABiomassBase::SetBiomassSpreadTimerInterval(float NewInterval) {
}

void ABiomassBase::OnRep_BiomassRadius() {
}

void ABiomassBase::OnRep_BiomassLocation() {
}

bool ABiomassBase::IsOnBiomass(const FVector Point) {
    return false;
}

void ABiomassBase::HandleMonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

float ABiomassBase::GetDistanceToLocalPlayerSquared() {
    return 0.0f;
}

float ABiomassBase::GetDistanceToLocalPlayer() {
    return 0.0f;
}

float ABiomassBase::GetDistanceToBiomassEdge(const FVector Point) {
    return 0.0f;
}

float ABiomassBase::GetDistanceToBiomassCenter(const FVector Point) {
    return 0.0f;
}

void ABiomassBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABiomassBase, BiomassLocation);
    DOREPLIFETIME(ABiomassBase, BiomassRadius);
}


