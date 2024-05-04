#pragma once
#include "CoreMinimal.h"
#include "ESessionSortType.h"
#include "SessionSortInfo.generated.h"

USTRUCT(BlueprintType)
struct FSessionSortInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionSortType LobbySortType;
    
    TWINSTICK_API FSessionSortInfo();
};

