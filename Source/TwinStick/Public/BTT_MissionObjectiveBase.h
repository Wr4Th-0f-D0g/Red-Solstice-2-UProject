#pragma once
#include "CoreMinimal.h"
#include "BTT_MissionLocationBase.h"
#include "BTT_MissionObjectiveBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTT_MissionObjectiveBase : public UBTT_MissionLocationBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskAborted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReturnSuccessImmediately;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskAborted OnTaskAborted;
    
    UBTT_MissionObjectiveBase();

    UFUNCTION(BlueprintCallable)
    void CompleteSubObjective();
    
};

