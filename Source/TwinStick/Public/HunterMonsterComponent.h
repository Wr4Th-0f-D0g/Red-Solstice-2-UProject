#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHunterAttack.h"
#include "EHunterEvade.h"
#include "EHunterHunting.h"
#include "EHunterIdleState.h"
#include "EHunterMainState.h"
#include "EHunterSearchDistance.h"
#include "HunterAggroRepositionDelays.h"
#include "HunterAttacksWeighted.h"
#include "HunterDoorDelegateDelegate.h"
#include "HunterRepositionInfo.h"
#include "LocationInfo.h"
#include "MonsterComponentBase.h"
#include "Templates/SubclassOf.h"
#include "HunterMonsterComponent.generated.h"

class AActor;
class ADoorBase;
class AHunterVentExitActor;
class AHunterVentilationActor;
class AZoneActor;
class UParticleSystem;
class USceneComponent;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHunterMonsterComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HunterRightOfDoor, meta=(AllowPrivateAccess=true))
    bool bHunterIsRightOfDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDelaySuppressedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDelaySuppressedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorHunter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHunterDoorDelegate OnHunterDoorChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedIncreasePerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostAnimationIncreaseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAggroIncreasePerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHunterAggroRepositionDelays> AggroRepositionDelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* BoostBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearAggroCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverlapCheckExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> NoiseAggroMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNoiseAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDamageAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHunterMainState CurrentHunterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterMainState PrevHunterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterHunting CurrentHuntingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterHunting PrevHuntingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterEvade CurrentEvadeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterEvade PrevEvadeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHunterAttack HunterAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHunterIdleState HunterIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectTypeQuery> MarineObjectChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHunterSearchDistance, float> SearchDistanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HunterLocationTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHunterEvade, FHunterRepositionInfo> RepositionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHunterEvade> BiomassEvades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHunterEvade> InsideBiomassEvades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHunterEvade> InsideEvades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorDamageCapsuleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorDamageCapsuleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DoorDamageCapsuleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorMeleeBoxLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorMeleeBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DoorSwitchDisableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DoorMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightSideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RightSideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftSideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LeftSideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorHideHunterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreMarkersTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreMarkersGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRoomAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDamageAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHearingAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HunterBaseAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomAggroMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundAggroMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAggroMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomAggroDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAggroDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingAggroDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCustomAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomAggroDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHunterAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationInfo HunterChosenLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHunterSpotted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HunterVanishParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHunterAttachedToDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedDoor, meta=(AllowPrivateAccess=true))
    ADoorBase* AttachedDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHunterAttacksWeighted> WeightedCloseAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHunterAttacksWeighted> WeightedRangedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHunterAttacksWeighted> WeightedExecuteAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* SuppressionBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> SuppressionBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterSearchDistance CurrentSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAggroForSpotting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHunterVentilationActor* ChosenVent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHunterVentExitActor* ChosenExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedFlags, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedFlags;
    
    UHunterMonsterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleHunterMesh(bool bNewHidden, bool bShowParticle);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHunterCollisions(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SpottedCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetHunterInVentilation(bool bInVentilation);
    
    UFUNCTION(BlueprintCallable)
    void SetHunterInsideVent(bool bInsideVent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHunterIdleState(EHunterIdleState NewIdle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHunterAttack(EHunterAttack NewAttack);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHunterAtDoor(ADoorBase* Door);
    
    UFUNCTION(BlueprintCallable)
    void SetHunterAggroMaxClamp(float InMaxAggro);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScaleDisabled(bool bNewDisabled, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetLocation(FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable)
    bool SelectBestLocation(FVector& OutLoc);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHunterAggro(float AggroToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool ProjectLocationNavMesh(const FVector& InLocation, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedFlags(uint8 OldFlags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HunterRightOfDoor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedDoor();
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionDetectedTarget(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHuntingStateChanged(EHunterHunting NewState, EHunterHunting OldState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHunterMainStateChanged(EHunterMainState NewState, EHunterMainState OldState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnEvadeStateChanged(EHunterEvade NewState, EHunterEvade OldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetLocation(FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGravityScaleDisabled(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastParticleLocation(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    // UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    // void MulticastParticleAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseSuppression();
    
    UFUNCTION(BlueprintCallable)
    void HunterDoorCheck();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GotoHuntingState(EHunterHunting NewHuntingState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GotoHunterMainState(EHunterMainState NewMainState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GotoEvadeState(EHunterEvade NewEvadeState);
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomPointInMarkerExtents(const FLocationInfo& LocInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EHunterHunting GetPrevHuntingState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EHunterMainState GetPrevHunterMainState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EHunterEvade GetPrevEvadeState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLocInfoFromZones(const TArray<AZoneActor*>& Zones, const FName& Tag, FLocationInfo& OutLocInfo, EHunterSearchDistance SearchDistance, bool bSort, bool bWithPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHunterTotalAggro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHunterIdleState GetHunterIdleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHunterAttack GetHunterAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHunterHunting GetCurrentHuntingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHunterMainState GetCurrentHunterMainState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHunterEvade GetCurrentEvadeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLocationInfo> GetAllCorridors() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindLocationForReposition(bool& bNoOneInZones);
    
    UFUNCTION(BlueprintCallable)
    void DecayAggro();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayersTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllHunterAggro();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EHunterHunting ChooseReposition();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EHunterEvade ChooseEvadeType();
    
    UFUNCTION(BlueprintCallable)
    EHunterAttack ChooseAttack(bool bRanged, bool bExecute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector CeilingDropLocation(const FVector& HunterChosenLoc, const FLocationInfo& LocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleCollisionsChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void BoostInterval();
    
    UFUNCTION(BlueprintCallable)
    void AllowAggro();
    
    UFUNCTION(BlueprintCallable)
    void AddHunterAggro(float InAggro);
    
};

