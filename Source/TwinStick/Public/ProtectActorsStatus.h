#pragma once
#include "CoreMinimal.h"
#include "ProtectActorsStatus.generated.h"

USTRUCT(BlueprintType)
struct FProtectActorsStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KilledTargets;
    
    TWINSTICK_API FProtectActorsStatus();
};

