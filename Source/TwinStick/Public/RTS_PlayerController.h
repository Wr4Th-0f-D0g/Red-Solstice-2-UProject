#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonInputBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MinimapInterface.h"
#include "CameraControlChangedDelegate.h"
#include "ControlModeChangedDelegate.h"
#include "ControllerMouseButtonPressedDelegate.h"
#include "Damage.h"
#include "EDifficulty.h"
#include "EFiringMode.h"
#include "ELevelType.h"
#include "ESolsticeControlMode.h"
#include "EStormSeverity.h"
#include "EStrategyMissionResult.h"
#include "FiringMode.h"
#include "OnHoverTargetChangedDelegate.h"
#include "PlayerManualModeChangedDelegate.h"
#include "PlayerMatchSummary.h"
#include "PlayerRank.h"
#include "PostPawnModeChangedDelegate.h"
#include "SolsticePlayerController.h"
#include "Templates/SubclassOf.h"
#include "RTS_PlayerController.generated.h"

class AActor;
class AFollowerHeroCharacterBase;
class AHeroAI_Controller;
class AHeroCharacterBase;
class AHeroControllerBase;
class AInteractionActor;
class AInventoryPickup;
class ALocalInteractionWidgetActor;
class AMonsterCharacterBase;
class ANPCHeroController;
class AObserverPawn;
class APawn;
class APrefabActor;
class ARTS_PlayerState;
class ASolsticeWeaponBase;
class IDamagable;
class UDamagable;
class IInteractionInterface;
class UInteractionInterface;
class UCameraShakeBase;
class UGamepadTraceComponent;
class UHeroSkillsComponent;
class UInputComponent;
class UInteractionDetectionComponent;
class UInteractionDetectionGamepad;
class UInteractionDetectionRTS;
class UInteractionDetectionWASD;
class UMouseAndKeyboardTraceComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USolsticeWeaponComponent;
class UTraceComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ARTS_PlayerController : public ASolsticePlayerController, public IMinimapInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionDetectionRTS* InteractionDetectionRTS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionDetectionWASD* InteractionDetectionWASD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionDetectionGamepad* InteractionDetectionGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMouseAndKeyboardTraceComponent* MouseAndKeyboardTraceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGamepadTraceComponent* GamepadTraceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* HeroInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* VehicleInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* ObserverInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeControlMode ControlMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlModeChanged OnControlModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeControlMode CachedControlMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostPawnModeChanged OnPostPawnModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraControlChanged OnCameraControlChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlledVehicle, meta=(AllowPrivateAccess=true))
    APawn* ControlledVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AHeroControllerBase* VehicleMovementController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeroControllerBase> VehicleMovementControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionDetectionComponent* ActiveInteractionDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTraceComponent* ActiveTraceComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerMouseButtonPressed OnMouseButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsWASD;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerManualModeChanged OnManualModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MechInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedRecoveryLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMonsterCharacterBase> DebugMonsterToSpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialCinematic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InteractionTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DestructableTargets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PreviewInteractionTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HoverTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractionContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverTargetChanged OnHoverTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverTargetChanged OnInteractableContextChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdjustedCameraTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdjustedWeaponTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponTraceAtWeaponHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracePositionUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadiusForInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadiusForDestructables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerCameraSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseOnlyInteractablesInFow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverwatchEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OverwatchEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverWatchParticleRangeMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Hero, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* OldHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObserverPawn* Observer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AInteractionActor* InteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AHeroAI_Controller* HeroController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPCHeroController* NPCCachedHeroController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARTS_PlayerState* HeroPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARTS_PlayerState* OldHeroPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingInteractableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALocalInteractionWidgetActor> LocalInteractionWidgetActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALocalInteractionWidgetActor* LocalInteractionWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldMoveTimerTick;
    
    ARTS_PlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TurnRecoveryOff();
    
    UFUNCTION(BlueprintCallable)
    void TracesCompleted(bool bHitUnderMouse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleTutorialWidgetDisplay(bool bDisplay, float Timer);
    
    UFUNCTION(BlueprintCallable)
    void ToggleOverwatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMapDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInputMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void ToggledShowInteractableWidgets(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPawnToFollower(AFollowerHeroCharacterBase* FollowerPawn, bool bHideHero);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPawnBackToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SwapWeapons(bool bSendRPC);
    
    UFUNCTION(BlueprintCallable)
    void SpinUp(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void SpinRight(float Axis);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowGameHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeIgnoredAsInteractable(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeIgnoredAsDestructable(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetLastInteractionTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionContext(AActor* NewInteractionContext);
    
    UFUNCTION(BlueprintCallable)
    void SetHoverTarget(AActor* NewHoverTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetHero(AHeroCharacterBase* InHero);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadCursorModeSpeed(float NewCursorModeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadCursorMode(bool SetCursorMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringModeMode(EFiringMode NewFiringMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringMode(FFiringMode NewFiringMode);
    
    UFUNCTION(BlueprintCallable)
    void SetControlMode(ESolsticeControlMode InControlMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateMousePosition(FVector_NetQuantize CameraTracePos, FVector_NetQuantize WeaponTracePos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleFireMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwapWeapons(bool ToSecondary, float Timestamp, USolsticeWeaponComponent* TargetWeaponComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestWorldTime(float ClientTimeStamp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReloadWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOpenFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyRandomizerDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyPlayerPromoted(int32 NewPlayerRank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyLoadedPrefab(APrefabActor* PrefabActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnableOverwatch(bool bEnable, float Timestamp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnableManualAim(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConfirmActiveAbility();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCeaseFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAbortInteraction();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAbortActiveAbility();
    
    UFUNCTION(BlueprintCallable)
    void RunDestructibleDetection(FVector Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void Revive();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestWorldTime_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestRecoveryMove(const FVector& RecoveryLoc);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverwatchEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutOfAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OpenFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Hero();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlledVehicle(APawn* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnOverwatchEffectChanged(UParticleSystemComponent* ParticleComponent, bool IsActive, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavRecoveryFinished(const FVector& CurrentPosition, bool bReachedNavMesh);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyManualAimChanged(bool bEnabled, bool bSecondarySwap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadedWorld(ELevelType LevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OpenFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetPlayerViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FireButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FireButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientMonsterExecutionCamera(AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Client_ExecutionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClickToMoveReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClickToMovePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSpecializedWeaponMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTargetedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOverwatchMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInManualMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIdleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractableTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractableContextChanged(AActor* OldContext, AActor* NewContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputToggleMapDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoverTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideGameHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHoverTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleRevivedServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleRevivedClient();
    
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchTargetChanged(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleOutOfAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMeleeSkillTag(const FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleManualChangeRequested(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType InInputType);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroIncapacitated(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHeroSkillsComponent* GetSkillsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerWorldTimeDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerWorldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObserverPawn* GetObserver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastInteractionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetInteractableTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoverInfoTarget(TScriptInterface<IInteractionInterface>& HoverInfoTarget, AActor*& InteractableActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARTS_PlayerState* GetHeroPlayerState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGamepadCursorScreenPosition(float& LocationX, float& LocationY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamepadCursorMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringMode GetFiringModeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFiringMode GetFiringMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetDestructableTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeControlMode GetControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBestInteractableTarget(TScriptInterface<IInteractionInterface>& InteractionTarget, AActor*& InteractableActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBestDestructableTarget(TScriptInterface<IDamagable>& DestructableTarget, AActor*& DestructableActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeWeaponComponent* GetActiveWeaponComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetActiveWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GamepadShowRadialMenu(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GamepadInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GamepadCameraControlActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceAbortInteraction();
    
    UFUNCTION(BlueprintCallable)
    void FastSwapWeapons();
    
    UFUNCTION(BlueprintCallable)
    void EnableManualAim();
    
    UFUNCTION(BlueprintCallable)
    void DropAmmo();
    
    UFUNCTION(BlueprintCallable)
    void DrawTraceResults();
    
    UFUNCTION(BlueprintCallable)
    void DisableManualAim();
    
    UFUNCTION(BlueprintCallable)
    bool ConfirmActiveAbility();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateWorldTime(float ClientTimeStamp, float ServerTimeStamp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateLocalPlayerProgress(const FPlayerRank& PlayerStats);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientToggleGameInput(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTestPickup(AInventoryPickup* InventoryPickup);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetupVehicleControls(APawn* OldVehicle, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPlayerTasksCompleted(const FGameplayTagContainer& CompletedTasks);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPlayerTaskBonusesCompleted(const FGameplayTag& CompletedBonus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetObserverLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetHUDHidden(bool bNewHidden, bool bDisableClientEnable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetControlMode(ESolsticeControlMode InControlMode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetAttackTarget(AActor* NewAttackTarget);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerMedalReceived(const FGameplayTag& MedalTag, EDifficulty AwardedDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void ClientPlayCameraShakeInRange(const FVector& InLocation, const float InRange, TSubclassOf<UCameraShakeBase> InCameraShake, float InScale);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyManualUnavailable();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyFinalCountdownStarted(float ServerTimeStamp, float CountdownTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLogOffense(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandlePlayerPromotion(AHeroCharacterBase* InPlayer, int32 NewRank);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleOwnedPlayerPromotion(AHeroCharacterBase* InPlayer, int32 NewRank, FPlayerRank InStats);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleDeploymentCompleted(bool Victory, const TArray<FPlayerMatchSummary>& PlayerStats, EStrategyMissionResult Result, int32 PlayersEvacuated);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAwardRequisition(int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAwardAchievements(const FGameplayTagContainer& AchievementTags, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAwardAchievement(const FGameplayTag& AchievementTag, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbortInteraction();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MonsterExecutionCamera(AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExecutionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearTargetHighlight(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInteractableContextHighlight(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable)
    void CeaseFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionToTargeted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionToOverwatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionToManual();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionFiringMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelActiveAbility();
    
    UFUNCTION(BlueprintCallable)
    void BackupProfile();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AwardProfileTag(const FGameplayTag& InProfileTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreControlsBlockedByCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreActionControlsIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyStormDebuff(EStormSeverity StormSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnnounceInteraction(AActor* NewTarget, AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortInteraction();
    

    // Fix for true pure virtual functions not being implemented
};

