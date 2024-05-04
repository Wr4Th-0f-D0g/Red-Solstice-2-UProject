#pragma once
#include "CoreMinimal.h"
#include "Request_AlphaStatus.generated.h"

USTRUCT(BlueprintType)
struct FRequest_AlphaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Checksum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Guid;
    
    TWINSTICK_API FRequest_AlphaStatus();
};

