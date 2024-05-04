#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogSpeaker.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWINSTICK_API FDialogSpeaker : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextSpeed;
    
    FDialogSpeaker();
};

