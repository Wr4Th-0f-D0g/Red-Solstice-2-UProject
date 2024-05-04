#pragma once
#include "CoreMinimal.h"
#include "AttributeLinkedComponent.h"
#include "EnergyDepletedFromMaxDelegate.h"
#include "EnergyExhaustedDelegate.h"
#include "EnergyRechargedDelegate.h"
#include "Resource.h"
#include "ResourceChangedDelegateDelegate.h"
#include "SuitEnergyChangedDelegate.h"
#include "SuitMaxEnergyChangedDelegate.h"
#include "EnergyComponent.generated.h"

class ASolsticeCharacterBase;
class UFMODEvent;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEnergyComponent : public UAttributeLinkedComponent, public IResource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeCharacterBase> CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Energy, meta=(AllowPrivateAccess=true))
    float Energy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EnergyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OverwatchEnergyReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyRegenerationBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnergyRegenerationAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfRegenerationVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* MovementEnergyBuff;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuitEnergyChanged OnSuitEnergyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuitMaxEnergyChanged OnSuitMaxEnergyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnergyExhausted OnEnergyExhausted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnergyRecharged OnEnergyRecharged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnergyDepletedFromMax OnEnergyDepletedFromMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OutOfEnergySound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceChangedDelegate OnResourceChanged;
    
    UEnergyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleEnergyRegeneration(bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SuspendEnergyRegeneration(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergyReserved(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergyRegeneration(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergyMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergy(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Energy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyAvailablePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergy() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetCharacterOwner(ASolsticeCharacterBase*& Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeltaEnergy(float Value);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasEnoughResources(int32 Required) const override PURE_VIRTUAL(HasEnoughResources, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimulatedResourceDelta() const override PURE_VIRTUAL(GetSimulatedResourceDelta, return 0;);
    
    UFUNCTION(BlueprintCallable)
    float GetResources() const override PURE_VIRTUAL(GetResources, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetReservedResources() const override PURE_VIRTUAL(GetReservedResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    UFMODEvent* GetOutOfResourcesSound() const override PURE_VIRTUAL(GetOutOfResourcesSound, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaximumResources() const override PURE_VIRTUAL(GetMaximumResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvailableResources() const override PURE_VIRTUAL(GetAvailableResources, return 0;);
    
};

