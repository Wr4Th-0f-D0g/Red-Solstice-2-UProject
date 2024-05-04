#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RTSPerceptionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API URTSPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URTSPerceptionComponent(const FObjectInitializer& ObjectInitializer);

};

