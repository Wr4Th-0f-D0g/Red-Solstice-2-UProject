#pragma once
#include "CoreMinimal.h"
#include "EGameState.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8 {
    EGT_MainMenu,
    EGT_LevelSelect,
    EGT_ServerList,
    EGT_OptionMenu,
    EGT_Credits,
    EGT_Armory,
    EGT_IngameMenu,
    EGT_Tutorial,
    EGT_Playing,
    EGT_LoadingScreen,
    EGT_Paused,
    EGT_Intro,
    EGT_Skirmish,
    EGT_Private,
    EGT_Invalid,
};

