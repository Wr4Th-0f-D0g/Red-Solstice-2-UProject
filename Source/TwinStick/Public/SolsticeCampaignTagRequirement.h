#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SolsticeCampaignTagRequirement.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeCampaignTagRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignSelectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredCampaignTags;
    
    TWINSTICK_API FSolsticeCampaignTagRequirement();
};

