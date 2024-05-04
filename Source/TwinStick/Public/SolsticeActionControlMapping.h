#pragma once
#include "CoreMinimal.h"
#include "SolsticeActionMapping.h"
#include "SolsticeInputControlMapping.h"
#include "SolsticeActionControlMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeActionControlMapping : public FSolsticeInputControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeActionMapping RTS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeActionMapping WASD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeActionMapping Gamepad;
    
    TWINSTICK_API FSolsticeActionControlMapping();
};

