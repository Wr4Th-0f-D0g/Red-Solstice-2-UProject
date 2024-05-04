#pragma once
#include "CoreMinimal.h"
#include "EquipmentSpace.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryEquipmentSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryEquipmentSpace;
    
    TWINSTICK_API FEquipmentSpace();
};

