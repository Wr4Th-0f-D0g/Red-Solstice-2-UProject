#include "PowerManager.h"
#include "Net/UnrealNetwork.h"

UPowerManager::UPowerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratedPower = 0;
    this->UsedPower = 0;
    this->RelaysActivated = 0;
}

void UPowerManager::RegisterRelaysAndConsumers() {
}

void UPowerManager::RegisterPowerRelay(APowerRelay* Relay) {
}

void UPowerManager::RegisterActiveConsumer(APowerConsumer* Consumer) {
}

void UPowerManager::HandleRelayStateChanged(APowerRelay* Relay, EPowerRelayState NewState) {
}

int32 UPowerManager::GetUsedPower() const {
    return 0;
}

void UPowerManager::GetSectorMainRelay(FName SectorName, APowerRelay*& PowerRelay) {
}

void UPowerManager::GetSectorConsumers(FName SectorName, TArray<APowerConsumer*>& PowerConsumers) {
}

int32 UPowerManager::GetGeneratedPower() const {
    return 0;
}

int32 UPowerManager::GetAvailablePower() const {
    return 0;
}

void UPowerManager::CalculateGlobalPower() {
}

void UPowerManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPowerManager, GeneratedPower);
    DOREPLIFETIME(UPowerManager, UsedPower);
}


