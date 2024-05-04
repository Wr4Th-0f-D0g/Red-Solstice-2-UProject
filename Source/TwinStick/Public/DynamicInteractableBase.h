#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DynamicActorBase.h"
#include "EIndicatorType.h"
#include "HoverInfoInterface.h"
#include "InteractionAbortedDelegate.h"
#include "InteractionCompletedDelegate.h"
#include "InteractionInterface.h"
#include "InteractionStartedDelegate.h"
#include "SolsticeSignificanceInterface.h"
#include "Templates/SubclassOf.h"
#include "DynamicInteractableBase.generated.h"

class AActor;
class AController;
class APawn;
class UFOWHideComponent;
class UInteractableComponent;
class UInteractionWidgetBase;

UCLASS(Blueprintable)
class TWINSTICK_API ADynamicInteractableBase : public ADynamicActorBase, public IInteractionInterface, public IHoverInfoInterface, public ISolsticeSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFOWHideComponent* FOWHideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionWidgetBase> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InteractionInfoHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionWidgetLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionCompleted OnInteractionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionAborted OnInteractionAborted;
    
    ADynamicInteractableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetSignificance() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionStarted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionAborted(APawn* InteractionInstigator);
    

    // Fix for true pure virtual functions not being implemented
};

