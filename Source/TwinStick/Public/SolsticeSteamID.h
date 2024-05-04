#pragma once
#include "CoreMinimal.h"
#include "SolsticeSteamID.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSteamID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    TWINSTICK_API FSolsticeSteamID();
};

