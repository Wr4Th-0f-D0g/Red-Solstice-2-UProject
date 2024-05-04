#pragma once
#include "CoreMinimal.h"
#include "EItemDescriptionType.generated.h"

UENUM(BlueprintType)
enum class EItemDescriptionType : uint8 {
    IDT_None,
    IDT_Medical,
    IDT_Explosive,
    IDT_Ammunition,
    IDT_Support,
    IDT_Special,
    IDT_Upgrade,
    IDT_Legendary,
};

