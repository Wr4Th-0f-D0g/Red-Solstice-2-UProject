#pragma once
#include "CoreMinimal.h"
#include "SoundInstanceScheduledChangeObjtBase.h"
#include "SoundInstanceScheduledChangeObjParameter.generated.h"

UCLASS(Blueprintable)
class USoundInstanceScheduledChangeObjParameter : public USoundInstanceScheduledChangeObjtBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    USoundInstanceScheduledChangeObjParameter();

};

