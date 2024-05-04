#pragma once
#include "CoreMinimal.h"
#include "Response_AlphaStatus.generated.h"

USTRUCT(BlueprintType)
struct FResponse_AlphaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Online;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Checksum;
    
    TWINSTICK_API FResponse_AlphaStatus();
};

