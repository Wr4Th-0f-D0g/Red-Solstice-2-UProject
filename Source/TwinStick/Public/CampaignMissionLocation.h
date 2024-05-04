#pragma once
#include "CoreMinimal.h"
#include "ECampaignMissionLocation.h"
#include "CampaignMissionLocation.generated.h"

USTRUCT(BlueprintType)
struct FCampaignMissionLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignMissionLocation MissionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredRegionInfestationLevel;
    
    TWINSTICK_API FCampaignMissionLocation();
};

