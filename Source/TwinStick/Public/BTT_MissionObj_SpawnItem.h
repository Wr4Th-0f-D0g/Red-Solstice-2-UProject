#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTT_MissionLocationBase.h"
#include "BTT_MissionObj_SpawnItem.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UBTT_MissionObj_SpawnItem : public UBTT_MissionLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagsToApplyToItem;
    
    UBTT_MissionObj_SpawnItem();

};

