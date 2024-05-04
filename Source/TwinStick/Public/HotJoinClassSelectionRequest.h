#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "HotJoinClassSelectionRequest.generated.h"

USTRUCT(BlueprintType)
struct FHotJoinClassSelectionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass RequestedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClassApproved;
    
    TWINSTICK_API FHotJoinClassSelectionRequest();
};

