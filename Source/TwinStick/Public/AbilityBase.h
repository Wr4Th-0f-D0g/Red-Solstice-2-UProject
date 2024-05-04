#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "AbilityDescription.h"
#include "AbilityDisplay.h"
#include "AbilityFinishedDelegate.h"
#include "ActivationParameters.h"
#include "AspectSet.h"
#include "AspectValueSet.h"
#include "AttributeLinkedComponent.h"
#include "EAbilityEndPolicy.h"
#include "EActivationFailure.h"
#include "EActivationLocation.h"
#include "EActivationStatus.h"
#include "EDamageGroup.h"
#include "EItemDescriptionType.h"
#include "GrantAndActivatePayload.h"
#include "InheritableTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AbilityBase.generated.h"

class AAbilityActorBase;
class AAbilityProjectileActorBase;
class AActor;
class AAoE_MarkerBase;
class APawn;
class IResource;
class UResource;
class UAbilityBase;
class UActivationBase;
class UBotSkillOverrideBase;
class UDataTable;
class UFMODAudioComponent;
class UFMODEvent;
class UGameplayTask;
class UMaterialInterface;
class UNavigationQueryFilter;
class USolsticeBuffBase;
class USplineComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAbilityBase : public UAttributeLinkedComponent, public IAbilityDisplay, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCooldownValueChanged, float, TimeRemaining, float, CooldownPercent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCooldownReadyChanged, UAbilityBase*, ItemReference, bool, CooldownReady, const FGameplayTag&, AbilityTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityUsed, UAbilityBase*, Ability, const FGameplayTag&, AbilityTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityReadyChanged, bool, Ready);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMoveToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTickDisable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnInstigator, meta=(AllowPrivateAccess=true))
    APawn* PawnInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AIOverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAbilityRunning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooldownReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialCooldown, meta=(AllowPrivateAccess=true))
    float InitialCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> ActiveTasks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemporaryGrantedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GrantedPayload, meta=(AllowPrivateAccess=true))
    FGrantAndActivatePayload GrantedPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> OverrideFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCachedLocationOnly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCooldownReadyChanged OnCooldownReadyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityReadyChanged OnAbilityReadyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityUsed OnAbilityUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActivationBase* ActivationObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IResource> Resource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCooldownValueChanged OnCooldownValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityFinished OnAbilityFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldServerSimulateActivation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivationStatus EnterCooldownCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDescription AbilityDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemDescriptionType, FLinearColor> AbilityDescriptionTypeColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivationLocation ActivationLocationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityEndPolicy EndPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer SkillPreventionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAspectSet Aspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AbilityDefinitionTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BotAbilityDefinitionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityDescriptionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AppliedBuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBotSkillOverrideBase* BotSkillOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbilityActorSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedLevelDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedNextLevelDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FModAbilityAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SkillLoadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SkillFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SkillFailLoadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* UseFailedCooldownSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CooldownFinishedSound;
    
public:
    UAbilityBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateActivationRange();
    
    UFUNCTION(BlueprintCallable)
    void StartCooldown(float OverrideCooldownTime);
    
    UFUNCTION(BlueprintCallable)
    AAbilityProjectileActorBase* SpawnProjectileActor(TSubclassOf<AAbilityProjectileActorBase> ProjectileActorClass, const FTransform& SpawnTransform, const FVector& TargetLocation, const FPredictProjectilePathResult& ProjectilePath, float HorizontalVelocity, bool bSetTeamToInstigator);
    
    UFUNCTION(BlueprintCallable)
    AAbilityActorBase* SpawnAbilityActor(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform, const FVector TargetLocation, bool bSetTeamToInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldPredictProjectilePath() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPawnInstigator(APawn* InPawn, bool bQueueIfNoController);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownTimeRemaining(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownTime(float Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetCooldownReadyClient(bool bReady);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerResetAbility(uint8 PredictionKey, float ClientTimeStamp);
    
    UFUNCTION(Reliable, Server)
    void ServerFireAbility(const FVector_NetQuantize10& Vector, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDoForceAbort(bool bRollback);
    
    UFUNCTION(Reliable, Server)
    void ServerDeactivateAbility(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged);
    
    UFUNCTION(Reliable, Server)
    void ServerConfirmAbility(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearGrantedAbility();
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerActivateAbility(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool RequiresResourcesToActivate() const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveAbilityBuff(AActor* TargetActor, TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PawnInstigatorHasTag(const FGameplayTag& TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnInstigator();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Level(int32 OldLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialCooldown(float OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GrantedPayload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFired(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToActivate(EActivationFailure Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivated(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConfirmed(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharged(float Percent, FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated(FVector TargetLocation, APawn* OwningPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAborted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform MakeAbilityActorSpawnTransform(const FVector& TargetLocation, const FVector& SpawnLocationOffset, float SpawnPitchOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IResource> K2_GetResource(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool K2_CanDeactivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool K2_CanConfirm(FVector TargetLocation, bool bOnDeactivation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool K2_CanActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool K2_CanAbort() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggleAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetedLocationInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsideMinimumRange(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooldownReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResourcesToActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveToFailed(TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveTargetReached(bool AtGoal);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeAspectChanged(FName InAspectName);
    
    UFUNCTION(BlueprintCallable)
    void HandleActivationStatusChanged(EActivationStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UClass* GetRealDamageSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawnInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ENetRole> GetNetRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMinimumRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetHeal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDoT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCooldownReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectValueForNextLevel(FName AspectName, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectValueForLevel(FName InAspectName, int32 InLevel, bool& bOutSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectValueForCurrentLevel(FName AspectName, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAspectTextForNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAspectTextForLevel(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAspectTextForCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAspectStringsForNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAspectStringsForLevel(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAspectStringsForCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAspectValueSet GetAspectSetForCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetAreaMarkerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAoE_MarkerBase* GetAreaMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActivationStatus GetActivationStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetActivationRangeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActivationRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActivationParameters GetActivationParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActivationCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbilityActorCollisionRadius(TSubclassOf<AAbilityActorBase> AbilityActorClass) const;
    
    UFUNCTION(BlueprintCallable)
    void EndTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable)
    void DrawProjectilePath(USplineComponent* InSpline, UStaticMesh* StaticMesh, UMaterialInterface* Material, bool GoodArc);
    
    UFUNCTION(BlueprintCallable)
    void DoForceAbort(bool bRollback);
    
    UFUNCTION(BlueprintCallable)
    void DoEndAbility(bool bReplicateEndToServer);
    
    UFUNCTION(BlueprintCallable)
    void DoDeactivate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void DoActivateAtLocation(const FVector& TargetLocation, bool bAutoActivateConfirms);
    
    UFUNCTION(BlueprintCallable)
    void DoActivate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivationFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivationConfirmed(bool bSuccessful);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IResource> CreateResource();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CoerceTargetOutsideMinimumRange(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CoerceTargetIntoMaximumRange(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientToggleSkillDeactivated();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientAcknowledgeFire(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, float AvailableResources, bool bSuccessful);
    
    UFUNCTION(Client, Reliable)
    void ClientAcknowledgeDeactivation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, float AvailableResources, bool Successful);
    
    UFUNCTION(Client, Reliable)
    void ClientAcknowledgeConfirmation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, bool Successful);
    
    UFUNCTION(Client, Reliable)
    void ClientAcknowledgeActivation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, bool Successful);
    
    UFUNCTION(Client, Reliable)
    void ClientAcknowledgeAbort(uint16 PredictionKey, float ServerTimeStamp, float AvailableResources, bool bRollback);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearProjectilePath(USplineComponent* InSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeactivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConfirm(const FVector& TargetLocation, bool bOnDeactivation) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAbort() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CalculateProjectilePath(float PreferredPitch, float MaximumPitch, const FVector& Start, const FVector& End, TSubclassOf<AAbilityActorBase> AbilityActorClass, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FPredictProjectilePathResult& PredictResult, FVector& LaunchVelocity, float& FlightTime, float CollisionRadiusOverride, float Gravity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CalculateArcPath(float PreferredPitch, float MaximumPitch, const FVector& Start, const FVector& End, bool bTraceWithChannel, const TEnumAsByte<ECollisionChannel> TraceChannel, TSubclassOf<AAbilityActorBase> AbilityActorClass, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FPredictProjectilePathResult& PredictResult, FVector& LaunchVelocity, float& FlightTime, float CollisionRadiusOverride, float Gravity) const;
    
    UFUNCTION(BlueprintCallable)
    void CacheTargetLocation(const FVector& InLocation, bool bOnlyUseCachedLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CacheLevelDescription();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintSimulateFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintRollbackFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintConfirmFire();
    
public:
    UFUNCTION(BlueprintCallable)
    USolsticeBuffBase* AddAbilityBuff(AActor* TargetActor, TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivationConfirmed(bool bSuccessful);
    

    // Fix for true pure virtual functions not being implemented
};

