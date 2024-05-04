#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "AIScentEvent.h"
#include "AISense_Scent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UAISense_Scent : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIScentEvent> ScentEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfScentSq;
    
public:
    UAISense_Scent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportScentEvent(UObject* WorldContextObject, FVector ScentLocation, float Strength, AActor* Instigator, float MaxRange, FName Tag);
    
};

