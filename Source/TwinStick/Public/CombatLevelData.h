#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatLevelData.generated.h"

USTRUCT(BlueprintType)
struct FCombatLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DescriptionRow;
    
    TWINSTICK_API FCombatLevelData();
};

