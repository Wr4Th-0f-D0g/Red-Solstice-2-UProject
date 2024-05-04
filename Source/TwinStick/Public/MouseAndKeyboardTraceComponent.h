#pragma once
#include "CoreMinimal.h"
#include "TraceComponent.h"
#include "MouseAndKeyboardTraceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMouseAndKeyboardTraceComponent : public UTraceComponent {
    GENERATED_BODY()
public:
    UMouseAndKeyboardTraceComponent(const FObjectInitializer& ObjectInitializer);

};

