#pragma once
#include "CoreMinimal.h"
#include "SolsticeNavigationQueryFilter.h"
#include "NavFilter_IgnoreNonFloor.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UNavFilter_IgnoreNonFloor : public USolsticeNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_IgnoreNonFloor();

};

