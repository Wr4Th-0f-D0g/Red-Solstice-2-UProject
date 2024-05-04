#include "LevelSpecificsActor.h"
#include "BodyPartPoolComponent.h"
#include "CivilianManager.h"
#include "ConnectedMeshManagerBase.h"
#include "DesignationManager.h"
#include "MonsterManager.h"
#include "MovableVehicleManager.h"
#include "SpawnManager.h"
#include "TeamInstigatorManager.h"

ALevelSpecificsActor::ALevelSpecificsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AIDirector = NULL;
    this->bGameReady = false;
    this->MissionSetupActor = NULL;
    this->LocationManager = NULL;
    this->PowerManager = NULL;
    this->CivilianManager = CreateDefaultSubobject<UCivilianManager>(TEXT("CivilianManager"));
    this->LootManager = NULL;
    this->SpawnManager = CreateDefaultSubobject<USpawnManager>(TEXT("SpawnManager"));
    this->MonsterManager = CreateDefaultSubobject<UMonsterManager>(TEXT("MonsterManager"));
    this->FollowerDirector = NULL;
    this->DesignationManager = CreateDefaultSubobject<UDesignationManager>(TEXT("DesignationManager"));
    this->ConnectedMeshManager = CreateDefaultSubobject<UConnectedMeshManagerBase>(TEXT("VehiclePathfindingManager"));
    this->AtmosphereController = NULL;
    this->DropshipController = NULL;
    this->VehicleManager = CreateDefaultSubobject<UMovableVehicleManager>(TEXT("VehicleManager"));
    this->TeamInstigatorManager = CreateDefaultSubobject<UTeamInstigatorManager>(TEXT("TeamInstigatorManager"));
    this->BodyPartPool = CreateDefaultSubobject<UBodyPartPoolComponent>(TEXT("BodyPartPool"));
}

void ALevelSpecificsActor::StartLootSpawn() {
}


void ALevelSpecificsActor::HandleSequenceComplete(ALevelSequenceActor* Sequence) {
}

void ALevelSpecificsActor::HandleLocationsMapped_Implementation(ULocationManager* Sender) {
}

UMovableVehicleManager* ALevelSpecificsActor::GetVehicleManager() const {
    return NULL;
}

UTeamInstigatorManager* ALevelSpecificsActor::GetTeamInstigatorManager() const {
    return NULL;
}

USpawnManager* ALevelSpecificsActor::GetSpawnManager() const {
    return NULL;
}

UPowerManager* ALevelSpecificsActor::GetPowerManager() const {
    return NULL;
}

UMonsterManager* ALevelSpecificsActor::GetMonsterManager() const {
    return NULL;
}

ULootManager* ALevelSpecificsActor::GetLootManager() const {
    return NULL;
}

ULocationManager* ALevelSpecificsActor::GetLocationManager() const {
    return NULL;
}

UFollowerDirector* ALevelSpecificsActor::GetFollowerDirector() const {
    return NULL;
}

ADropshipControllerBase* ALevelSpecificsActor::GetDropshipControllerBase() const {
    return NULL;
}

UDesignationManager* ALevelSpecificsActor::GetDesignationManager() const {
    return NULL;
}

UConnectedMeshManagerBase* ALevelSpecificsActor::GetConnectedMeshSystemManager() const {
    return NULL;
}

UCivilianManager* ALevelSpecificsActor::GetCivilianManager() const {
    return NULL;
}

UBodyPartPoolComponent* ALevelSpecificsActor::GetBodyPartPool() {
    return NULL;
}

FBlockDecisionMonsterDataElement ALevelSpecificsActor::GetBlockMonsterDataElementForLevel(int32 InLevel) {
    return FBlockDecisionMonsterDataElement{};
}

AAtmosphereController* ALevelSpecificsActor::GetAtmosphereController() const {
    return NULL;
}

UAIDirector* ALevelSpecificsActor::GetAIDirector() const {
    return NULL;
}


