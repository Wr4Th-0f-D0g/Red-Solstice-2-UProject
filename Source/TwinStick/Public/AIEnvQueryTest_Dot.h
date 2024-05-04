#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EAIEnvTestDot.h"
#include "AIEnvQueryTest_Dot.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UAIEnvQueryTest_Dot : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection LineB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIEnvTestDot TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteValue;
    
public:
    UAIEnvQueryTest_Dot();

};

