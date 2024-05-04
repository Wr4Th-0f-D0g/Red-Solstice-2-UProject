#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EArtillerySupportLevel.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "MSAChallengeRequirements.generated.h"

USTRUCT(BlueprintType)
struct FMSAChallengeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Infestation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime HordeArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArtillerySupportLevel ArtillerySupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MapPool;
    
    TWINSTICK_API FMSAChallengeRequirements();
};

