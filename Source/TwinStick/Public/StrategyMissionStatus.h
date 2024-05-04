#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionStatus.h"
#include "StrategyMissionStatus.generated.h"

USTRUCT(BlueprintType)
struct FStrategyMissionStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionStatus CompletionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNeedsFinalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFinalized;
    
    TWINSTICK_API FStrategyMissionStatus();
};

