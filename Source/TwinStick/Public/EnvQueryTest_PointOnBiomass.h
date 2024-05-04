#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_PointOnBiomass.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class TWINSTICK_API UEnvQueryTest_PointOnBiomass : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_PointOnBiomass();

};

