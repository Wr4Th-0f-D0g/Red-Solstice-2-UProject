#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AISolsticeNoiseEvent.h"
#include "AISenseEvent_SolsticeHearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UAISenseEvent_SolsticeHearing : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISolsticeNoiseEvent Event;
    
public:
    UAISenseEvent_SolsticeHearing();

};

