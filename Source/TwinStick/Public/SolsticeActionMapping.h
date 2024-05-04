#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "SolsticeInputMapping.h"
#include "SolsticeActionMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeActionMapping : public FSolsticeInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> Mapping;
    
    TWINSTICK_API FSolsticeActionMapping();
};

