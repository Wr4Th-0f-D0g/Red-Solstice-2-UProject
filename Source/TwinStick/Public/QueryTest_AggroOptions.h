#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "QueryTest_AggroOptions.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UQueryTest_AggroOptions : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue IsBiomassAI;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue IgnorePlayersInBuildings;
    
    UQueryTest_AggroOptions();

};

