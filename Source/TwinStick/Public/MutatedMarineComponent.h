#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MutatedMarineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMutatedMarineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMutatedMarineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MutateMarine();
    
    UFUNCTION(BlueprintCallable)
    void MutatedAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MutateMarine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MutatedAttack();
    
};

