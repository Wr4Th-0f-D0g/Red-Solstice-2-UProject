#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "HealthWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHealthWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UHealthWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

