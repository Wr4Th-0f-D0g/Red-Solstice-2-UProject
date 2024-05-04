#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGen_FindInteractedDoors.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEnvQueryGen_FindInteractedDoors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> Filter;
    
    UEnvQueryGen_FindInteractedDoors();

};

