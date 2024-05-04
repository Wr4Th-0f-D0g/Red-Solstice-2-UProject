#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentInteractionComponent.generated.h"

class AActor;
class APawn;
class UEnvIntResponseBase;
class UInteractableComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEnvironmentInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, TSoftClassPtr<UEnvIntResponseBase>> ResponseObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, UEnvIntResponseBase*> ResponseObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* CallingInteractableComponent;
    
public:
    UEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartInteraction(APawn* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void CompleteInteraction(AActor* InInteractableActor, const TArray<APawn*>& InInstigators, bool InSuccess);
    
    UFUNCTION(BlueprintCallable)
    void AbortInteraction(APawn* InInstigator);
    
};

