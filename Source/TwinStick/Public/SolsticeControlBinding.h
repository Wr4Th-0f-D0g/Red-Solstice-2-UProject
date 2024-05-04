#pragma once
#include "CoreMinimal.h"
#include "OptionsMenuTextRow.h"
#include "SolsticeControlBinding.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeControlBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionsMenuTextRow ControlData;
    
    TWINSTICK_API FSolsticeControlBinding();
};

