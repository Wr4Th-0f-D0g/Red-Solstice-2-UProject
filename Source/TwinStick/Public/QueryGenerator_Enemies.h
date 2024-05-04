#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "QueryGenerator_Enemies.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UQueryGenerator_Enemies : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue bPerceivedEnemies;
    
    UQueryGenerator_Enemies();

};

