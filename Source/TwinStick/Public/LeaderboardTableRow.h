#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESolsticeLeaderboardDisplayType.h"
#include "ESolsticeLeaderboardSortMethod.h"
#include "LeaderboardTableRow.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FLeaderboardTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderboardDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderboardDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeLeaderboardSortMethod SortMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeLeaderboardDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    FLeaderboardTableRow();
};

