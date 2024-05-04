#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IndicatorLibrary.generated.h"

class AController;
class UIndicatorManagerComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UIndicatorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIndicatorLibrary();

    UFUNCTION(BlueprintCallable)
    static UIndicatorManagerComponent* GetIndicatorManagerComponent(AController* Controller);
    
};

