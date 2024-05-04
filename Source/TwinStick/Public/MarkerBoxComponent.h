#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "MarkerBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMarkerBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UMarkerBoxComponent(const FObjectInitializer& ObjectInitializer);

};

