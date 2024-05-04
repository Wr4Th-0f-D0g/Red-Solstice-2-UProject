#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ColonyDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FColonyDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Picture;
    
    TWINSTICK_API FColonyDescription();
};
