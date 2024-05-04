#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EArtillerySupportLevel.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "PlayerStatContainer.h"
#include "PlayerChallengeRow.generated.h"

USTRUCT(BlueprintType)
struct FPlayerChallengeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty MinimumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfestationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime HordeArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArtillerySupportLevel ArtillerySupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GrantedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatContainer DeploymentStats;
    
    TWINSTICK_API FPlayerChallengeRow();
};

