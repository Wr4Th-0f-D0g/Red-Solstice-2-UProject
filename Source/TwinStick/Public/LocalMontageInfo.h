#pragma once
#include "CoreMinimal.h"
#include "LocalMontageInfo.generated.h"

class UAnimMontage;
class UObject;

USTRUCT(BlueprintType)
struct FLocalMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ForcePlayBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstCatchUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Payload;
    
    TWINSTICK_API FLocalMontageInfo();
};

