#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Proximity.generated.h"

class UAISense_Proximity;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TWINSTICK_API UAISenseConfig_Proximity : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Proximity> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSuccessRangeFromLastRangeLocation;
    
    UAISenseConfig_Proximity();

};

