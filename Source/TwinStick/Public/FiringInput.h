#pragma once
#include "CoreMinimal.h"
#include "FiringMode.h"
#include "FiringInput.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFiringInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringMode FiringMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    TWINSTICK_API FFiringInput();
};

