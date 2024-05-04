#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionObjective.h"
#include "MissionDialogRow.generated.h"

USTRUCT(BlueprintType)
struct FMissionDialogRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionObjective> MissionObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDialogsBeInterrupted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterruptOtherDialogs;
    
    TWINSTICK_API FMissionDialogRow();
};

