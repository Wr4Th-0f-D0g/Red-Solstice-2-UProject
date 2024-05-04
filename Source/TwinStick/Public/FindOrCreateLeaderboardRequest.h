#pragma once
#include "CoreMinimal.h"
#include "LeaderboardRequestBase.h"
#include "FindOrCreateLeaderboardRequest.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UFindOrCreateLeaderboardRequest : public ULeaderboardRequestBase {
    GENERATED_BODY()
public:
    UFindOrCreateLeaderboardRequest();

};

