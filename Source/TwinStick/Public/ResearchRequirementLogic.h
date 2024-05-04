#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ResearchRequirementLogic.generated.h"

class UStrategyResearchManager;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API UResearchRequirementLogic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStrategyResearchManager> CurrentResearchManager;
    
    UResearchRequirementLogic();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResearchMeetsSpecializedRequirements();
    
};

