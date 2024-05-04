#pragma once
#include "CoreMinimal.h"
#include "SolsticeLevelActorBase.h"
#include "StrategyLevelActorBase.generated.h"

class UInfestationDecalDataAsset;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyLevelActorBase : public ASolsticeLevelActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInfestationDecalDataAsset* InfestationDecalData;
    
    AStrategyLevelActorBase(const FObjectInitializer& ObjectInitializer);

};

