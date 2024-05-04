#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "Components/Slider.h"
#include "Templates/SubclassOf.h"
#include "AuthaerCommonSlider.generated.h"

class UAuthaerCommonSliderStyle;

UCLASS(Blueprintable)
class TWINSTICK_API UAuthaerCommonSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAuthaerCommonSliderStyle> SliderStyleClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnAnalogCapture;
    
    UAuthaerCommonSlider();

};

