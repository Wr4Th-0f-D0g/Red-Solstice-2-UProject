#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicActorBase.h"
#include "EIndicatorType.h"
#include "HoverInfoInterface.h"
#include "InteractionInterface.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentObjectBase.generated.h"

class AActor;
class AController;
class APawn;
class UCapsuleComponent;
class UInteractableComponent;
class UInteractionWidgetBase;
class UNavModifierComponentSolstice;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AEnvironmentObjectBase : public ADynamicActorBase, public IInteractionInterface, public IHoverInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionWidgetBase> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionAbortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionWidgetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponentSolstice* NavModifier;
    
    AEnvironmentObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionStarted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& InteractionInstigators, bool Success);
    

    // Fix for true pure virtual functions not being implemented
};

