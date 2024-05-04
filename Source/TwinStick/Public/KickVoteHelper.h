#pragma once
#include "CoreMinimal.h"
#include "KickVoteHelper.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FKickVoteHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerToKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Voters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> AgreeingVoters;
    
    TWINSTICK_API FKickVoteHelper();
};

