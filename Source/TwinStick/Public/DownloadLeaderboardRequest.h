#pragma once
#include "CoreMinimal.h"
#include "LeaderboardRequestBase.h"
#include "DownloadLeaderboardRequest.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UDownloadLeaderboardRequest : public ULeaderboardRequestBase {
    GENERATED_BODY()
public:
    UDownloadLeaderboardRequest();

};

