#pragma once
#include "CoreMinimal.h"
#include "BiomassKillScheduleStruct.generated.h"

class ABiomassCenterActor;
class APawn;

USTRUCT(BlueprintType)
struct FBiomassKillScheduleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomassCenterActor* BiomassActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    TWINSTICK_API FBiomassKillScheduleStruct();
};

