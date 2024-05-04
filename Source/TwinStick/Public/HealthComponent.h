#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "AttributeLinkedComponent.h"
#include "Damage.h"
#include "EDamageGroup.h"
#include "EDissolveType.h"
#include "EIndicatorType.h"
#include "ReplicatedDamageContainer.h"
#include "Resource.h"
#include "ResourceChangedDelegateDelegate.h"
#include "HealthComponent.generated.h"

class AActor;
class AController;
class APawn;
class UFMODEvent;
class UHealthWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHealthComponent : public UAttributeLinkedComponent, public IResource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWidgetVisibilityChanged, bool, bNewVisibility);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActorDownedClient);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDamage DeadDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSyncInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDynamicHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicHealthBarTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthWidgetComponent* DynamicHealthBarWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActorDamagedFirstTime, meta=(AllowPrivateAccess=true))
    bool bActorDamagedFirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHealthRegenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeOfDeath, meta=(AllowPrivateAccess=true))
    float TimeOfDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateDamageOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedDamageContainer, meta=(AllowPrivateAccess=true))
    FReplicatedDamageContainer ReplicatedDamageContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRevive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetVisibilityChanged OnWidgetVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDownedClient OnActorDownedClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OutOfHealthSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceChangedDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EDissolveType MostActualDissolveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 KillDamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal KillDamageDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsKillDamageBrutal;
    
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessDamage(UPARAM(Ref) FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedDamageContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorDamagedFirstTime();
    
    UFUNCTION(BlueprintCallable)
    void ModifyHealth(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKillDamageBrutal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void HideDynamicHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void HandleRevived();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWidgetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillDamageValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetKillDamageDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDissolveType GetDissolveType() const;
    
    UFUNCTION(BlueprintCallable)
    void DoHeal(float Amount, APawn* HealInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DoDamage(FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDamage(const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverHealthbars(AController* Controller, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetermineDissolveType(EDissolveType& OutDissolveDamageType, AActor* InInstigator, EDamageGroup InDamageType);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_DisplayDamage(const FDamage& DamageInfo);
    

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

