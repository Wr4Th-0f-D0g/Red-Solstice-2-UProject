#pragma once
#include "CoreMinimal.h"
#include "SavedDataTableRowHandle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FSavedDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    TWINSTICK_API FSavedDataTableRowHandle();
};

