#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocalInteractionWidgetActor.generated.h"

class AExplosiveActorBase;
class APawn;
class UInteractableWidgetComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ALocalInteractionWidgetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableWidgetComponent* InteractableWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableWidgetComponent* ExplosivePreviewWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentExplosivePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentHoveredActor;
    
    ALocalInteractionWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnHoveredInteractable(AActor* OldInteractable);
    
    UFUNCTION(BlueprintCallable)
    void ToggleExplosivePreview(AActor* ExplosiveActor, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void HoveredInteractable(AActor* InteractableActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionComplete(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleExplosiveDestroyed(AExplosiveActorBase* ExplosiveActor);
    
};

