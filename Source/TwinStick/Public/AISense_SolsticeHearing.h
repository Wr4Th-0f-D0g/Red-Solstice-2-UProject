#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AISolsticeNoiseEvent.h"
#include "AISense_SolsticeHearing.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Engine)
class TWINSTICK_API UAISense_SolsticeHearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISolsticeNoiseEvent> NoiseEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
public:
    UAISense_SolsticeHearing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportSolsticeNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, FGameplayTag NoiseTag, float Loudness, AActor* Instigator, float MaxRange);
    
};

