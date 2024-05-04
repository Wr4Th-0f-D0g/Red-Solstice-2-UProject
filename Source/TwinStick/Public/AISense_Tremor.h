#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "AITremorEvent.h"
#include "AISense_Tremor.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UAISense_Tremor : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITremorEvent> TremorEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfTremorSq;
    
public:
    UAISense_Tremor();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportTremorEvent(UObject* WorldContextObject, FVector TremorLocation, float Strength, AActor* Instigator, float MaxRange, FName Tag);
    
};

