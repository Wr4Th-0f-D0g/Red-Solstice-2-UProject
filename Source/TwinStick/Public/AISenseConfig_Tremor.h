#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Tremor.generated.h"

class UAISense_Tremor;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TWINSTICK_API UAISenseConfig_Tremor : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Tremor> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TremorRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Tremor();

};

