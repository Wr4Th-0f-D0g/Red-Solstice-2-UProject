#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Damage.h"
#include "DynamicDamagableBase.h"
#include "EFiringState.h"
#include "ESolsticeDoorState.h"
#include "InteractionLocation.h"
#include "LocationInfo.h"
#include "Templates/SubclassOf.h"
#include "TerminalUserInterface.h"
#include "DoorBase.generated.h"

class AActor;
class ALocationMarkerBase;
class APawn;
class APowerConsumer;
class ASolsticeWeaponBase;
class IGenericTeamAgentInterface;
class UGenericTeamAgentInterface;
class UAnimMontage;
class UArrowComponent;
class UBoxComponent;
class UFMODEvent;
class UNavArea;
class UNavModifierComponentSolstice;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class TWINSTICK_API ADoorBase : public ADynamicDamagableBase, public ITerminalUserInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChanged, UObject*, Object);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysAttackDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ProximityOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* HunterAttachPointLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* HunterAttachPointRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorNavBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponentSolstice* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> PassableAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> ImpassableAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> MonsterPathingAllowedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALocationMarkerBase*> LocationsToDisableWhenDoorClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> DisabledLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolvedLinkedObjectGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEpicFailedMiserably;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorState, meta=(AllowPrivateAccess=true))
    uint8 DoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassesUnableToTriggerDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOpenOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageDirection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SelectedMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> LinkedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LinkedTerminalsGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugLineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFlushPersistantDebugLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugLineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugLinePersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugLineDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebugLineDepthPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugLineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWakeMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineDamagePerKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RifleKickDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PistolKickDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BatonKickDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LocalInterationLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionLocation> WorldInteractionLocations;
    
    ADoorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleDoorCollisions(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Repair(APawn* RepairInstigator);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDoorState(ESolsticeDoorState RemovedState);
    
    UFUNCTION(BlueprintCallable)
    void PopulateWorldInteractionLocations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorState(uint8 OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHacked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutomatic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HunterDestroyDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasState(ESolsticeDoorState InState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHunterAttached() const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLeftArea();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnEnteredArea();
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleInstigatorWeaponStateChanged(ASolsticeWeaponBase* ActiveWeapon, EFiringState OldState, EFiringState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavArea> GetNavAreaClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APowerConsumer*> GetLinkedTerminals() const;
    
    UFUNCTION(BlueprintCallable)
    void FortifyDoor(float HitPointsHealed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorRepaired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorPowered(bool bNewPowered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorOpened();
    
    UFUNCTION(BlueprintCallable)
    bool DoorIsHostileTo(TScriptInterface<IGenericTeamAgentInterface> Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorHacked(bool bNewHacked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoorAutomated(bool bNewAutomated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableEvac();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenAutomatically() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePowered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeHacked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDoorState(ESolsticeDoorState AddedState);
    

    // Fix for true pure virtual functions not being implemented
};

