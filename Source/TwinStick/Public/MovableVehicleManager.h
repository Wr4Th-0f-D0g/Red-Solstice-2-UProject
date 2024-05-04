#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovableVehicleManager.generated.h"

class AMovableDestrVehicleBase;
class ASolsticeDrivableVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMovableVehicleManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMovableDestrVehicleBase*> VehiclesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeDrivableVehicle*> DrivableVehiclesArray;
    
public:
    UMovableVehicleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterVehicle(AMovableDestrVehicleBase* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterDriveableVehicle(ASolsticeDrivableVehicle* DriveableVehicle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterVehicle(AMovableDestrVehicleBase* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDriveableVehicle(ASolsticeDrivableVehicle* DrivableVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMovableDestrVehicleBase*> GetRegisteredVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeDrivableVehicle*> GetRegisteredDriveableVehicles() const;
    
};

