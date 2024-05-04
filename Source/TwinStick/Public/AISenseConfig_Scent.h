#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Scent.generated.h"

class UAISense_Scent;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TWINSTICK_API UAISenseConfig_Scent : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Scent> Implementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScentRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Scent();

};

