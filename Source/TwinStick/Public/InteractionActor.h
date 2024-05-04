#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "InteractionActor.generated.h"

class APawn;
class UInteractionWheelComponent;
class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AInteractionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Hero, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InteractionActorRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* InteractionWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionWheelComponent* InteractionWheelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionTarget, meta=(AllowPrivateAccess=true))
    AActor* InteractionTarget;
    
    AInteractionActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInteractionTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionTarget(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Hero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionStarted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionAborted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionTargetReplicated(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionStarted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool Success);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionAborted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionWidgetLocation() const;
    
};

