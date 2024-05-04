#pragma once
#include "CoreMinimal.h"
#include "ESessionSearchDistance.h"
#include "SolsticeSessionSearchFilter.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSessionSearchFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideStartedGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionSearchDistance SearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchTypeFilter;
    
    TWINSTICK_API FSolsticeSessionSearchFilter();
};

