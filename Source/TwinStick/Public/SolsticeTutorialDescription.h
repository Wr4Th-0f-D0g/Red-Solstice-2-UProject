#pragma once
#include "CoreMinimal.h"
#include "SolsticeTechDescription.h"
#include "SolsticeTutorialDescription.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeTutorialDescription : public FSolsticeTechDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KeybindNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialCategory;
    
    TWINSTICK_API FSolsticeTutorialDescription();
};

