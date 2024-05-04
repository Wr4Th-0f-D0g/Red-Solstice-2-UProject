#pragma once
#include "CoreMinimal.h"
#include "SolsticeAxisMapping.h"
#include "SolsticeInputControlMapping.h"
#include "SolsticeAxisControlMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeAxisControlMapping : public FSolsticeInputControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeAxisMapping RTS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeAxisMapping WASD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeAxisMapping Gamepad;
    
    TWINSTICK_API FSolsticeAxisControlMapping();
};

