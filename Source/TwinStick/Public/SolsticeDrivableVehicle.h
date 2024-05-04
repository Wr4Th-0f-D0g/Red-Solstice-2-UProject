#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "WheeledVehicle.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "Damagable.h"
#include "Damage.h"
#include "EAttribute.h"
#include "ESolsticeSignificanceType.h"
#include "ESolsticeTeam.h"
#include "ESolsticeVehicleType.h"
#include "GameplayTagNotifyInterface.h"
#include "InteractionInterface.h"
#include "SolsticeControlInterface.h"
#include "SolsticeSignificanceInterface.h"
#include "SolsticeVehicleData.h"
#include "SolsticeVehicleRuntimeAttachment.h"
#include "SolsticeVehicleRuntimeAttachmentContainer.h"
#include "Templates/SubclassOf.h"
#include "SolsticeDrivableVehicle.generated.h"

class AActor;
class ASolsticeCharacterBase;
class UAttributeComponent;
class UAuthaerWidgetComponent;
class UBoxComponent;
class UDamageComponent;
class UDynamicBuffBase;
class UEnergyComponent;
class UHealthComponent;
class UInteractableComponent;
class USolsticeBuffBase;
class USolsticeVehicleSeatComponent;
class USphereComponent;
class UStaticMeshComponent;
class UVehicleFXComponent;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API ASolsticeDrivableVehicle : public AWheeledVehicle, public ISolsticeControlInterface, public IDamagable, public IGameplayTagAssetInterface, public IGameplayTagNotifyInterface, public IVisualLoggerDebugSnapshotInterface, public IGenericTeamAgentInterface, public ISolsticeSignificanceInterface, public IInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleOccupied, meta=(AllowPrivateAccess=true))
    bool bVehicleOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavModifierCompa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleCacheSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* FloorTraceSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleRuntimeAttachmentContainer AttachmentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDynamicBuffBase> FuelBuffClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* FuelBuff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnergyComponent* EnergyComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeSignificanceType SignificanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InteractionInfoHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionWidgetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOverwatchOnPerceptionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InteractIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleFuelAdditive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameplayTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultVehicleTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleData VehicleData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform VehicleSpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CachedSafePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVehicleFXComponent* VehicleFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WreckMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerWidgetComponent* VehicleInfoWidgetComponent;
    
public:
    ASolsticeDrivableVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VehicleEverEntered() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TraceForFloor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrottleInput(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void Throttle(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ESolsticeTeam NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetStencilValue(int32 NewValue, bool bRenderCustomDepth);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleOccupied();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayTags();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleVehicleDied(const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ExitPlayerFromVehicle(ASolsticeCharacterBase* Char, bool bUseSetExitLocation, const FVector& ExitLocation, bool bForce) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EnergyReachedZero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanCharacterExitVehicle(ASolsticeCharacterBase* Char) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanCharacterEnterVehicle(ASolsticeCharacterBase* Char) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreeSeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyKilled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeVehicleData GetVehicleData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeTeam GetTeamEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVehicleFXComponent* GetFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeVehicleData GetDefaultData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeValue(EAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttachmentByCustomTag(FName InCustomTag, FSolsticeVehicleRuntimeAttachment& OutAttachmentData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorKineticResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorEnergyResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorDestructiveResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocksMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlipVehicle();
    
    UFUNCTION(BlueprintCallable)
    bool ExitVehicle(ASolsticeCharacterBase* Char, bool bUseSetExitLocation, const FVector& ExitLocation, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool EnterVehicle(ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterExitVehicle(ASolsticeCharacterBase* Char, bool bUseSetExitLocation, const FVector& ExitLocation, bool bForce) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterEnterVehicle(ASolsticeCharacterBase* Char) const;
    
    UFUNCTION(BlueprintCallable)
    void BrakeReleased();
    
    UFUNCTION(BlueprintCallable)
    void BrakePressed();
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    void GetActorGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetActorGameplayTags,);
    
};

