#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Damage.h"
#include "ESolsticeVehicleType.h"
#include "PowerConsumer.h"
#include "VehicleTerminalBase.generated.h"

class AActor;
class ASolsticeDrivableVehicle;
class UArrowComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AVehicleTerminalBase : public APowerConsumer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* VehicleSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleDestroyedResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleFailedToSpawnResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeDrivableVehicle* SpawnedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ResetHandle;
    
    AVehicleTerminalBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnedVehicleChanged(ESolsticeVehicleType NewVehicleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionEnabledChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleSpawnedVehicleDestroyed(AActor* DestroyedActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
};

