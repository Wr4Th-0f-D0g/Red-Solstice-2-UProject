#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Sight.h"
#include "AISense_AlwaysSight.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UAISense_AlwaysSight : public UAISense_Sight {
    GENERATED_BODY()
public:
    UAISense_AlwaysSight();

};

