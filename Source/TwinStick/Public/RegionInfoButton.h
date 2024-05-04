#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "RegionInfoButton.generated.h"

class ARegion;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API URegionInfoButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegion* ButtonRegion;
    
    URegionInfoButton();

};

