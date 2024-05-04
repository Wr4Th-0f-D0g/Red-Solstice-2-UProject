#include "VehicleTerminalBase.h"
#include "Components/ArrowComponent.h"

AVehicleTerminalBase::AVehicleTerminalBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->VehicleSpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("VehicleSpawnLocaiton"));
    this->VehicleDestroyedResetTime = 60.00f;
    this->VehicleFailedToSpawnResetTime = 5.00f;
    this->SpawnedVehicle = NULL;
    this->VehicleType = ESolsticeVehicleType::Invalid;
    this->VehicleSpawnLocation->SetupAttachment(RootComponent);
}



void AVehicleTerminalBase::HandleSpawnedVehicleDestroyed(AActor* DestroyedActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}


