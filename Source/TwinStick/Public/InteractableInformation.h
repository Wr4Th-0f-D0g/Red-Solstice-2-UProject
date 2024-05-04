#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InteractableInformation.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInteractableInformation : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DisplayImage;
    
    TWINSTICK_API FInteractableInformation();
};

