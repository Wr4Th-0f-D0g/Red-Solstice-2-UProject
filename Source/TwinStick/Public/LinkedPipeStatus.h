#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinkedPipeStatus.generated.h"

USTRUCT(BlueprintType)
struct FLinkedPipeStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLinkedPipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGasLeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyed;
    
    TWINSTICK_API FLinkedPipeStatus();
};

