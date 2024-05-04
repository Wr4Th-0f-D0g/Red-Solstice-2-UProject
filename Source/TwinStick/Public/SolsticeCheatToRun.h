#pragma once
#include "CoreMinimal.h"
#include "ESolsticeCheatExecutionTime.h"
#include "SolsticeCheatToRun.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeCheatToRun {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeCheatExecutionTime Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cheat;
    
    TWINSTICK_API FSolsticeCheatToRun();
};

