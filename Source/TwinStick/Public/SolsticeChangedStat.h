#pragma once
#include "CoreMinimal.h"
#include "SolsticeChangedStat.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeChangedStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    TWINSTICK_API FSolsticeChangedStat();
};

