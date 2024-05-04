#pragma once
#include "CoreMinimal.h"
#include "BodyPartArrayStruct.generated.h"

class ABodyPartBase;

USTRUCT(BlueprintType)
struct FBodyPartArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABodyPartBase*> BodyParts;
    
    TWINSTICK_API FBodyPartArrayStruct();
};

