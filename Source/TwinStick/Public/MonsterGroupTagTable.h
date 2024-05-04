#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MonsterSpawnTag.h"
#include "MonsterGroupTagTable.generated.h"

USTRUCT(BlueprintType)
struct FMonsterGroupTagTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterSpawnTag> MonsterGroupTable;
    
    TWINSTICK_API FMonsterGroupTagTable();
};

