#include "SpawnSettings_Deployment.h"
#include "Net/UnrealNetwork.h"

USpawnSettings_Deployment::USpawnSettings_Deployment() {
    this->DeploymentTable = NULL;
    this->DelayBetweenWaves = 5.00f;
}

void USpawnSettings_Deployment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnSettings_Deployment, DeploymentWaveInfo);
    DOREPLIFETIME(USpawnSettings_Deployment, PreGeneratedWaves);
}


