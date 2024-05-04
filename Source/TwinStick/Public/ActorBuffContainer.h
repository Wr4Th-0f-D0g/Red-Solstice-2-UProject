#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActorBuff.h"
#include "ActorBuffContainer.generated.h"

USTRUCT(BlueprintType)
struct FActorBuffContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorBuff> Items;
    
    TWINSTICK_API FActorBuffContainer();
};

