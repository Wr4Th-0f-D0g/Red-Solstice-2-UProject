#pragma once
#include "CoreMinimal.h"
#include "CampaignMediaSubtitleLine.h"
#include "CampaignMediaSubtitles.generated.h"

USTRUCT(BlueprintType)
struct FCampaignMediaSubtitles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignMediaSubtitleLine> SubtitleList;
    
    TWINSTICK_API FCampaignMediaSubtitles();
};

