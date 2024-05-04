#pragma once
#include "CoreMinimal.h"
#include "ControlNameTextStruct.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FControlNameTextStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    FControlNameTextStruct();
};

