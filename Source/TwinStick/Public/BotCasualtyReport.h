#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "MarsTime.h"
#include "BotCasualtyReport.generated.h"

USTRUCT(BlueprintType)
struct FBotCasualtyReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass MarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime TimeOfDeath;
    
    TWINSTICK_API FBotCasualtyReport();
};

