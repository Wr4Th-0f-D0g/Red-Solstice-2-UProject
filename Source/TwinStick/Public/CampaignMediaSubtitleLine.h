#pragma once
#include "CoreMinimal.h"
#include "CampaignMediaSubtitleLine.generated.h"

USTRUCT(BlueprintType)
struct FCampaignMediaSubtitleLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubtitleLine;
    
    TWINSTICK_API FCampaignMediaSubtitleLine();
};

