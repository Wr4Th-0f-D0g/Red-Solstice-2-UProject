#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "DcxVehicle.generated.h"

class UDcxVehicleWheelsComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API ADcxVehicle : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDcxVehicleWheelsComponent* VehicleWheels;
    
public:
    ADcxVehicle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleWheelsComponent* GetVehicleWheels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable)
    static void DcxVehicleSetBasisVectors(const FVector& Up, const FVector& Forward);
    
};

