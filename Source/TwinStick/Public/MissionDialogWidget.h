#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MissionDialogWidget.generated.h"

class AStrategyMapActor;
class AStrategyMission;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMissionDialogWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMission* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* MapActor;
    
    UMissionDialogWidget();

};

