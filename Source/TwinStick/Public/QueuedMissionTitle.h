#pragma once
#include "CoreMinimal.h"
#include "EMissionStatus.h"
#include "QueuedMissionTitle.generated.h"

USTRUCT(BlueprintType)
struct FQueuedMissionTitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStatus MissionStatus;
    
    TWINSTICK_API FQueuedMissionTitle();
};

