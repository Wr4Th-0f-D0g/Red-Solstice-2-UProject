#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SolsticeButtonTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSolsticeButtonTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MouseAndKeyboardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ButtonXbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ButtonPlaystation;
    
    TWINSTICK_API FSolsticeButtonTextures();
};

