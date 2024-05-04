#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESolsticeHeroClass.h"
#include "PlayerChallengeRow.h"
#include "PlayerTaskData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerTaskData : public FPlayerChallengeRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredMapPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass RequiredClass;
    
    TWINSTICK_API FPlayerTaskData();
};

