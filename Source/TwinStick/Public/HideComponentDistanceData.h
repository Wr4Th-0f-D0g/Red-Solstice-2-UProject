#pragma once
#include "CoreMinimal.h"
#include "HideComponentDistanceData.generated.h"

class UFOWComponent;

USTRUCT(BlueprintType)
struct FHideComponentDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFOWComponent> Component;
    
    TWINSTICK_API FHideComponentDistanceData();
};

