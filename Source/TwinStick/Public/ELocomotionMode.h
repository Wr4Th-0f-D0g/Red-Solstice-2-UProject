#pragma once
#include "CoreMinimal.h"
#include "ELocomotionMode.generated.h"

UENUM(BlueprintType)
enum class ELocomotionMode : uint8 {
    ELM_None,
    ELM_Light,
    ELM_Medium,
    ELM_Heavy,
    ELM_Pistol,
    ELM_Shotgun,
    ELM_Sniper,
    ELM_Grenade,
    ELM_Rocket,
    ELM_Barrel,
    ELM_BatonShield,
};

