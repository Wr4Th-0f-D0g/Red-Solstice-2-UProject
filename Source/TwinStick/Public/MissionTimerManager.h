#pragma once
#include "CoreMinimal.h"
#include "MissionTimer.h"
#include "MissionTimerManager.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FMissionTimerManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTimer MissionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FMissionTimerManager();
};

