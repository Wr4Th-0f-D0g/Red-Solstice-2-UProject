#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESolsticeTeam.h"
#include "BTDecorator_Team.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTDecorator_Team : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeTeam Team;
    
    UBTDecorator_Team();

};

