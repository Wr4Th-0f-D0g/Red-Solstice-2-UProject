#pragma once
#include "CoreMinimal.h"
#include "AspectData.h"
#include "AspectSetData.generated.h"

USTRUCT(BlueprintType)
struct FAspectSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAspectData> Aspects;
    
    TWINSTICK_API FAspectSetData();
};

