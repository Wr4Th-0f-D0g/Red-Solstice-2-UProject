#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DestructableTracker.h"
#include "DestructableContainer.generated.h"

USTRUCT(BlueprintType)
struct FDestructableContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestructableTracker> Items;
    
    TWINSTICK_API FDestructableContainer();
};

