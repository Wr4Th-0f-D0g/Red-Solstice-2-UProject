#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#include "EnvQueryGenerator_RearCone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEnvQueryGenerator_RearCone : public UEnvQueryGenerator_Cone {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_RearCone();

};

