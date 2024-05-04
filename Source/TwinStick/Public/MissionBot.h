#pragma once
#include "CoreMinimal.h"
#include "MissionBot.generated.h"

class ASolsticeCharacterBase;

USTRUCT(BlueprintType)
struct FMissionBot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    TWINSTICK_API FMissionBot();
};

