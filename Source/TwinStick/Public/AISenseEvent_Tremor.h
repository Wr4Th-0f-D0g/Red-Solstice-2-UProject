#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AITremorEvent.h"
#include "AISenseEvent_Tremor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UAISenseEvent_Tremor : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITremorEvent Event;
    
public:
    UAISenseEvent_Tremor();

};

