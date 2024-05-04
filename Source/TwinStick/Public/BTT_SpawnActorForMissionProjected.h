#pragma once
#include "CoreMinimal.h"
#include "BTT_MissionLocationBase.h"
#include "BTT_SpawnActorForMissionProjected.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API UBTT_SpawnActorForMissionProjected : public UBTT_MissionLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UBTT_SpawnActorForMissionProjected();

};

