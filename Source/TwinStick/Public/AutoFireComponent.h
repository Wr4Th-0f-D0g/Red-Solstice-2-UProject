#pragma once
#include "CoreMinimal.h"
#include "FireComponentBase.h"
#include "AutoFireComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAutoFireComponent : public UFireComponentBase {
    GENERATED_BODY()
public:
    UAutoFireComponent(const FObjectInitializer& ObjectInitializer);

};

