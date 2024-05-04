#pragma once
#include "CoreMinimal.h"
#include "SolsticeSteamGameID.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSteamGameID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    TWINSTICK_API FSolsticeSteamGameID();
};

