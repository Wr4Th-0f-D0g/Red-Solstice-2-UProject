#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "IndicatorLayer.generated.h"

UCLASS(Blueprintable)
class UIndicatorLayer : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ArrowBrush;
    
    UIndicatorLayer();

};

