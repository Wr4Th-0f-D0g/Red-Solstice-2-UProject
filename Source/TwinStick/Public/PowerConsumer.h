#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DynamicInteractableBase.h"
#include "PowerConsumerActivationChangedDelegate.h"
#include "PowerConsumerLinkedObjectDestroyedDelegate.h"
#include "PowerConsumer.generated.h"

class AActor;
class ADynamicActorBase;
class ALight;
class APowerConsumer;
class APowerRelay;
class UObject;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API APowerConsumer : public ADynamicInteractableBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChanged, UObject*, Object);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsumerActivated, APowerConsumer*, Consumer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerConsumerActivationChanged OnActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MiddleOfRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> LinkedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLinkedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOverriddenNetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInteractionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooldownInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugLineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFlushPersistantDebugLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugLineColorLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugLineColorDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugLineColorPowerRelay;
    
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
    int32 PowerRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerConsumption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresSectorPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasSectorPower, meta=(AllowPrivateAccess=true))
    bool bHasSectorPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LinkedObjectDestroyed, meta=(AllowPrivateAccess=true))
    bool bLinkedObjectDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActivated, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPermaDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyCost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConsumerActivated ConsumerActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerConsumerLinkedObjectDestroyed OnLinkedObjectDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreLinksAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALight*> LinkedLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LinkedLightsGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActorBase*> LinkedUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LinkedUsersGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APowerRelay* LinkedPowerRelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LinkedPowerRelayGuid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALight*> LinkedLightsPreEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActorBase*> LinkedUsersPreEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APowerRelay* LinkedPowerRelayPreEdit;
    
public:
    APowerConsumer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPermaDisabled(bool bNewPermaDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedObjectDestroyed(AActor* Actor, bool bInDestroyed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActivated(bool bNewActivated, bool bFromOnRep, bool bFromLinkedTerminal);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSectorPower(bool bNewPower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SectorPowerChanged(bool bNewPower);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkedObjectDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActivated(bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasSectorPower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowered() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawInteractionLocation();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLinks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateNormalLights(bool bTurnOnNormalLights, bool bShutdownLights);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivatedChanged(bool bNewActivated, bool bFromLinkedTerminal);
    
};

