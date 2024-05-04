#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "SolsticeCampaignID.h"
#include "SolsticeSaveGameInfo.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSaveGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeCampaignID CampaignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime CampaignTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
    TWINSTICK_API FSolsticeSaveGameInfo();
};

