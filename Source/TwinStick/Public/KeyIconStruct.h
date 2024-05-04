#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyIconStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWINSTICK_API FKeyIconStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    FKeyIconStruct();
};

