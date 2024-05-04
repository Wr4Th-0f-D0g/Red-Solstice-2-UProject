#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_InsideBuilding.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class TWINSTICK_API UEnvQueryTest_InsideBuilding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TargetActor;
    
    UEnvQueryTest_InsideBuilding();

};

