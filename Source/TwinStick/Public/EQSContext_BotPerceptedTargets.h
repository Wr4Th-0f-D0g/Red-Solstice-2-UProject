#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EQSContext_BotPerceptedTargets.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEQSContext_BotPerceptedTargets : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> Attitude;
    
    UEQSContext_BotPerceptedTargets();

};

