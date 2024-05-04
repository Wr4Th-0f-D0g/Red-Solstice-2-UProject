#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerProgressComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPlayerProgressComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerProgressComponent(const FObjectInitializer& ObjectInitializer);

};

