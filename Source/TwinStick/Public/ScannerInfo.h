#pragma once
#include "CoreMinimal.h"
#include "ScannerInfo.generated.h"

class ACivilianCharacterBase;

USTRUCT(BlueprintType)
struct FScannerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScannerOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACivilianCharacterBase> OccupyingCiv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeEnteredScanner;
    
    TWINSTICK_API FScannerInfo();
};

