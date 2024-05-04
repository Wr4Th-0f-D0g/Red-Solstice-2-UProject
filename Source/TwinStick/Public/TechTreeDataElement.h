#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TechTreeDataElement.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TechTag;
    
    TWINSTICK_API FTechTreeDataElement();
};

