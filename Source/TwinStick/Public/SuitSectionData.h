#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.h"
#include "SuitSectionData.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSuitSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitSection SuitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionSlots;
    
    FSuitSectionData();
};

