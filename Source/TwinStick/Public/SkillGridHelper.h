#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SolsticeTechData.h"
#include "SkillGridHelper.generated.h"

USTRUCT(BlueprintType)
struct FSkillGridHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeTechData SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint SkillGridPoint;
    
    TWINSTICK_API FSkillGridHelper();
};

