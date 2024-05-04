#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "InteractableInformation.h"
#include "InteractionInterface.generated.h"

class APawn;
class UInteractableComponent;

UINTERFACE(Blueprintable)
class UInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryStartInteraction(APawn* InInteractionInstigator, FVector& OutInteractionLocation, float& OutInteractionRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TogglePreviewInteraction(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowInteractionWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldInteractWhenApproached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractingWith(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasResourcesToInteract(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractionWidgetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractionProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionInfoDataHandle(FDataTableRowHandle& OutDataTableRowHandle, FInteractableInformation& OutInteractableInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractionAbortRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetInteractableTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInteractableComponent* GetInteractableComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoInteract(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisableInteractMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisableInteractHoverDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWithInFogOfWar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbortInteraction(APawn* InteractionInstigator);
    
};

