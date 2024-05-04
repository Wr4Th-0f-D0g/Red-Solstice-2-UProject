#pragma once
#include "CoreMinimal.h"
#include "UseItemAdditionalParams.generated.h"

USTRUCT(BlueprintType)
struct FUseItemAdditionalParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipTerminalsAlreadyActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPowerOnTerminal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeactivateTerminal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPowerOnTerminalRelayIfOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipPowerRelaysAlreadyActivated: 1;
    
    TWINSTICK_API FUseItemAdditionalParams();
};

