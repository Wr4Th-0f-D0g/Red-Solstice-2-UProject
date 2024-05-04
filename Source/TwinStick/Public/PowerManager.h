#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPowerRelayState.h"
#include "OnGeneratedPowerChangedDelegate.h"
#include "OnSectorPowerChangedDelegate.h"
#include "Sector.h"
#include "PowerManager.generated.h"

class APowerConsumer;
class APowerRelay;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPowerManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSectorPowerChanged SectorPowerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGeneratedPowerChanged GeneratedPowerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=CalculateGlobalPower, meta=(AllowPrivateAccess=true))
    int32 GeneratedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=CalculateGlobalPower, meta=(AllowPrivateAccess=true))
    int32 UsedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelaysActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSector> Sectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SectorNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<APowerRelay*> PowerRelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> ActiveConsumers;
    
    UPowerManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterRelaysAndConsumers();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPowerRelay(APowerRelay* Relay);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActiveConsumer(APowerConsumer* Consumer);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRelayStateChanged(APowerRelay* Relay, EPowerRelayState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsedPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSectorMainRelay(FName SectorName, APowerRelay*& PowerRelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSectorConsumers(FName SectorName, TArray<APowerConsumer*>& PowerConsumers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGeneratedPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailablePower() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CalculateGlobalPower();
    
};

