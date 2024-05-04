#pragma once
#include "CoreMinimal.h"
#include "MissilesPerTargetStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMissilesPerTargetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    TWINSTICK_API FMissilesPerTargetStruct();
};

