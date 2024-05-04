#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogLine.h"
#include "ObjectiveDialogText.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FObjectiveDialogText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogLine> StartDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogLine> EndDialog;
    
    FObjectiveDialogText();
};

