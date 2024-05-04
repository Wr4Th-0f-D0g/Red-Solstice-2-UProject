#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "SolsticeInputMapping.h"
#include "SolsticeAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeAxisMapping : public FSolsticeInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> Mapping;
    
    TWINSTICK_API FSolsticeAxisMapping();
};

