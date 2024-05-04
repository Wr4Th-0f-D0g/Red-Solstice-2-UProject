#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogLine.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct TWINSTICK_API FDialogLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Audio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DialogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLine;
    
public:
    FDialogLine();
};

