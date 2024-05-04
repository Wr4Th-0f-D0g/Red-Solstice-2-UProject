#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_Proximity.generated.h"

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UAISense_Proximity : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTracesPerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQueriesPerTimeSliceCheck;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTimeSlicePerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighImportanceDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxQueryImportance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximityLimitQueryImportance;
    
public:
    UAISense_Proximity();

};

