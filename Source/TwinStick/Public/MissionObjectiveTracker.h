#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionObjectiveTracker.generated.h"

class AMissionBase;
class UMissionTaskBase;

UCLASS(Blueprintable)
class TWINSTICK_API UMissionObjectiveTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 EmptyProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionBase* MissionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTaskBase* MissionTask;
    
    UMissionObjectiveTracker();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText GetObjectiveText() const;
    
};

