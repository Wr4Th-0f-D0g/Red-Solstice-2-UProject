#pragma once
#include "CoreMinimal.h"
#include "Components/MaterialBillboardComponent.h"
#include "InteractionWheelComponent.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractionWheelComponent : public UMaterialBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Interactable;
    
    UInteractionWheelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteractable(AActor* OldInteractable, AActor* NewInteractable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractableInvalidated(AActor* OldInteractable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractableAssigned(AActor* NewInteractable);
    
};

