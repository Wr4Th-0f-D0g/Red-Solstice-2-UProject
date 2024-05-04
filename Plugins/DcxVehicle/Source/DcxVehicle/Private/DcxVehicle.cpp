#include "DcxVehicle.h"
#include "Components/SkeletalMeshComponent.h"

ADcxVehicle::ADcxVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMeshComponent"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->VehicleWheels = NULL;
}

UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels() const {
    return NULL;
}

USkeletalMeshComponent* ADcxVehicle::GetMesh() const {
    return NULL;
}

void ADcxVehicle::DcxVehicleSetBasisVectors(const FVector& Up, const FVector& Forward) {
}


