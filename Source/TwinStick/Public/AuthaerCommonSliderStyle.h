#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "AuthaerCommonSliderStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API UAuthaerCommonSliderStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSliderStyle SliderStyle;
    
    UAuthaerCommonSliderStyle();

};

