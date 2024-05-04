#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MonsterSpawnType.generated.h"

USTRUCT(BlueprintType)
struct FMonsterSpawnType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    TWINSTICK_API FMonsterSpawnType();
};

