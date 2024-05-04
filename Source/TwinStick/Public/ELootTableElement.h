#pragma once
#include "CoreMinimal.h"
#include "ELootTableElement.generated.h"

UENUM(BlueprintType)
enum class ELootTableElement : uint8 {
    BasicLootMap,
    AverageLootMap,
    QualityLootMap,
    RandomLootMap,
};

