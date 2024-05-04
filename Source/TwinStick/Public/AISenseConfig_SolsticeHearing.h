#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_SolsticeHearing.generated.h"

class UAISense_SolsticeHearing;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class TWINSTICK_API UAISenseConfig_SolsticeHearing : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_SolsticeHearing> Implementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoSHearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLoSHearing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_SolsticeHearing();

};

