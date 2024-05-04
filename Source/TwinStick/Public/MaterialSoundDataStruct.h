#pragma once
#include "CoreMinimal.h"
#include "MaterialSoundDataStruct.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct TWINSTICK_API FMaterialSoundDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitSound;
    
    FMaterialSoundDataStruct();
};

