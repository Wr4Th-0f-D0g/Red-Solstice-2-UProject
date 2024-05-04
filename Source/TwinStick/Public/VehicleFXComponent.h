#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Damage.h"
#include "VehicleFXComponent.generated.h"

class AActor;
class ASolsticeCharacterBase;
class ASolsticeDrivableVehicle;
class UFMODAudioComponent;
class UFMODEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVehicleFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EngineRPMParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* EngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeCuttingEngineSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* EngineSoundComp;
    
    UVehicleFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VehicleFlipping(ASolsticeDrivableVehicle* SolsticeDrivableVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VehicleDestroyed(ASolsticeDrivableVehicle* SolsticeDrivableVehicle, const FDamage& Damage, bool bRecentlyDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VehicleDamaged(ASolsticeDrivableVehicle* SolsticeDrivableVehicle, const FDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutOfFuel(ASolsticeDrivableVehicle* SolsticeDrivableVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleCollidedWithActor(AActor* Actor, const FHitResult& Hit, float DamageDealt, float DamageReceived);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeDrivableVehicle* GetOwningVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterExitedSeat(ASolsticeDrivableVehicle* SolsticeDrivableVehicle, ASolsticeCharacterBase* SolsticeCharacterBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterEnteredSeat(ASolsticeDrivableVehicle* SolsticeDrivableVehicle, ASolsticeCharacterBase* AssignedCharacter);
    
};

