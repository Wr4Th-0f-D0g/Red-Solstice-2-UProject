#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MonsterGroup.h"
#include "MonsterGroupTable.generated.h"

USTRUCT(BlueprintType)
struct FMonsterGroupTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterGroup MonsterGroupTable;
    
    TWINSTICK_API FMonsterGroupTable();
};

