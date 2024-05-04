#pragma once
#include "CoreMinimal.h"
#include "SolsticeCampaignTagRequirement.h"
#include "SolsticeCampaignRequirement.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeCampaignRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeCampaignTagRequirement> Requirements;
    
    TWINSTICK_API FSolsticeCampaignRequirement();
};

