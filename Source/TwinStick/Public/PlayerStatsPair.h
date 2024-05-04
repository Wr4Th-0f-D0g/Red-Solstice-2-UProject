#pragma once
#include "CoreMinimal.h"
#include "PlayerRank.h"
#include "PlayerStatsPair.generated.h"

class AHeroCharacterBase;

USTRUCT(BlueprintType)
struct FPlayerStatsPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRank DeploymentStats;
    
    TWINSTICK_API FPlayerStatsPair();
};

