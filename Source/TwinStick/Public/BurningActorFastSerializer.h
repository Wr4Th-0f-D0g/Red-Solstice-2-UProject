#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BurningActorInfoStruct.h"
#include "BurningActorFastSerializer.generated.h"

USTRUCT(BlueprintType)
struct FBurningActorFastSerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBurningActorInfoStruct> BurningActors;
    
    TWINSTICK_API FBurningActorFastSerializer();
};

