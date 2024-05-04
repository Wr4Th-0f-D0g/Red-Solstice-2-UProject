#pragma once
#include "CoreMinimal.h"
#include "SolsticeNavigationQueryFilter.h"
#include "NavFilter_ProjectionAvoid.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UNavFilter_ProjectionAvoid : public USolsticeNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_ProjectionAvoid();

};

