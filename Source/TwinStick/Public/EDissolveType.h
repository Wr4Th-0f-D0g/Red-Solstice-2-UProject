#pragma once
#include "CoreMinimal.h"
#include "EDissolveType.generated.h"

UENUM(BlueprintType)
enum class EDissolveType : uint8 {
    DTNone,
    DTKinetic,
    DTEnergy,
    DTDestructive,
    DTFire,
    DTIce,
    DTAcid,
    DTSink,
};

