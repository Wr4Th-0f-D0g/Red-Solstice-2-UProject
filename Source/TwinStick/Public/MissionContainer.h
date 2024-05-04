#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MissionStatus.h"
#include "MissionContainer.generated.h"

USTRUCT(BlueprintType)
struct FMissionContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionStatus> Items;
    
    TWINSTICK_API FMissionContainer();
};

