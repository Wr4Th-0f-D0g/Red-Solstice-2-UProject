#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MonsterGroupNumber.generated.h"

USTRUCT(BlueprintType)
struct FMonsterGroupNumber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MonsterGroupRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAmount;
    
    TWINSTICK_API FMonsterGroupNumber();
};

