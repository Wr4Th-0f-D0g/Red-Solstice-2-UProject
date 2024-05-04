#pragma once
#include "CoreMinimal.h"
#include "ELevelType.generated.h"

UENUM(BlueprintType)
enum class ELevelType : uint8 {
    ELT_Invalid,
    ELT_Combat,
    ELT_Strategy,
    ELT_Tutorial,
    ELT_Travel,
    ELT_Menu,
    ELT_Cinematic,
    ELT_Armory,
    ELT_Skirmish,
    ELT_Other,
};

