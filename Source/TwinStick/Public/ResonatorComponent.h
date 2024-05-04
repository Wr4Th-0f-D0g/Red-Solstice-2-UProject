#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ResonatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UResonatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UResonatorComponent(const FObjectInitializer& ObjectInitializer);

};

