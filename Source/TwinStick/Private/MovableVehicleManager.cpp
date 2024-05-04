#include "MovableVehicleManager.h"

UMovableVehicleManager::UMovableVehicleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMovableVehicleManager::UnregisterVehicle(AMovableDestrVehicleBase* InVehicle) {
}

void UMovableVehicleManager::UnregisterDriveableVehicle(ASolsticeDrivableVehicle* DriveableVehicle) {
}

void UMovableVehicleManager::RegisterVehicle(AMovableDestrVehicleBase* InVehicle) {
}

void UMovableVehicleManager::RegisterDriveableVehicle(ASolsticeDrivableVehicle* DrivableVehicle) {
}

TArray<AMovableDestrVehicleBase*> UMovableVehicleManager::GetRegisteredVehicles() const {
    return TArray<AMovableDestrVehicleBase*>();
}

TArray<ASolsticeDrivableVehicle*> UMovableVehicleManager::GetRegisteredDriveableVehicles() const {
    return TArray<ASolsticeDrivableVehicle*>();
}


