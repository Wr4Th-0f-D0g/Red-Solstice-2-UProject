#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FOWForceUpdateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFOWForceUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFOWForceUpdateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceNearbyComponentsUpdate();
    
};

