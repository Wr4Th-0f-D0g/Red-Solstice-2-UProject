#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.h"
#include "Armorspace.generated.h"

USTRUCT(BlueprintType)
struct FArmorspace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESuitSection, int32> Map;
    
    TWINSTICK_API FArmorspace();
};

