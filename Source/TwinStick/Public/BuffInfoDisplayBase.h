#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SolsticeAttributeModifier.h"
#include "BuffInfoDisplayBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UBuffInfoDisplayBase : public UUserWidget {
    GENERATED_BODY()
public:
    UBuffInfoDisplayBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeModifier> MultiplyAttributeModifiers(TArray<FSolsticeAttributeModifier> Modifiers, int32 Multiplier);
    
};

