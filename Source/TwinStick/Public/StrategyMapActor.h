#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EDropshipStatus.h"
#include "EStrategyInteractionState.h"
#include "SolsticeSaveInterface.h"
#include "SolsticeSavedAttributeContainer.h"
#include "Templates/SubclassOf.h"
#include "StrategyMapActor.generated.h"

class ARegion;
class AStrategyMapActor;
class UAttributeComponent;
class UCameraComponent;
class UFMODEvent;
class UPaperSpriteComponent;
class USceneComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class UStrategyMapActorWidgetBase;
class UWidgetComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyMapActor : public AActor, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionChanged, AStrategyMapActor*, MapActor, EStrategyInteractionState, InteractionStatus);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPendingDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* PaperSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractableWithClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStrategyMapActorWidgetBase> MapActorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* InteractionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_InteractionState, meta=(AllowPrivateAccess=true))
    EStrategyInteractionState InteractionState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionChanged OnInteractionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSolsticeSavedAttributeContainer SavedAttributes;
    
    AStrategyMapActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void TravelTo();
    
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartInteraction();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionState(EStrategyInteractionState InState);
    
    UFUNCTION(BlueprintCallable)
    void Select();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MapActorIsViewTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInContactedRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropshipPresent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenContacted() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSafeToBeDestroyed(EDropshipStatus DropshipStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMapActorFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlanetaryNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyInteractionState GetInteractionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionSecondsRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionPercentCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetInteractionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDaysRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetAttachPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DropshipCanInteractWith() const;
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    

    // Fix for true pure virtual functions not being implemented
};

