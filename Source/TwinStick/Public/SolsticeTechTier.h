#pragma once
#include "CoreMinimal.h"
#include "SolsticeTechData.h"
#include "SolsticeTechTier.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeTechTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeTechData> Technologies;
    
    TWINSTICK_API FSolsticeTechTier();
};

