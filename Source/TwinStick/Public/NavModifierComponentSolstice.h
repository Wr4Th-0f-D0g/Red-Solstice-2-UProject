#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "NavModifierComponentSolstice.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UNavModifierComponentSolstice : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UNavModifierComponentSolstice(const FObjectInitializer& ObjectInitializer);

};

