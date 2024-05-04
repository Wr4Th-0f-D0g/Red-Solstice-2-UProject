#pragma once
#include "CoreMinimal.h"
#include "ActorAndTagContainerWrapper.h"
#include "ProtectActorWrapper.generated.h"

USTRUCT(BlueprintType)
struct FProtectActorWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorAndTagContainerWrapper ActorWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTauntMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntInterval;
    
    TWINSTICK_API FProtectActorWrapper();
};

