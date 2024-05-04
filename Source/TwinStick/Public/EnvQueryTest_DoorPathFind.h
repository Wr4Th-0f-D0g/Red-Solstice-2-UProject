#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEnvDoorTestPathfinding.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DoorPathFind.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class TWINSTICK_API UEnvQueryTest_DoorPathFind : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvDoorTestPathfinding::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UEnvQueryTest_DoorPathFind();

};

