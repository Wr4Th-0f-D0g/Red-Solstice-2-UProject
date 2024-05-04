#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AIScentEvent.h"
#include "AISenseEvent_Scent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UAISenseEvent_Scent : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIScentEvent Event;
    
public:
    UAISenseEvent_Scent();

};

