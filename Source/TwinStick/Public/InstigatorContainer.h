#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InteractionInstigator.h"
#include "InstigatorContainer.generated.h"

USTRUCT(BlueprintType)
struct FInstigatorContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionInstigator> Items;
    
    TWINSTICK_API FInstigatorContainer();
};

