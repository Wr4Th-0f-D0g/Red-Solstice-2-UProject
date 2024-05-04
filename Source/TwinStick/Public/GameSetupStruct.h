#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "GameSetupStruct.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FGameSetupStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedLevelLoadName;
    
    FGameSetupStruct();
};

