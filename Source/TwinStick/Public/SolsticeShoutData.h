#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PlayerShout.h"
#include "PlayerSkillShout.h"
#include "SolsticeShoutData.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeShoutData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> ShoutTagToText;
    
    USolsticeShoutData();

    UFUNCTION(BlueprintCallable)
    FText GetPlayerShoutTextForSkill(FPlayerSkillShout ShoutData);
    
    UFUNCTION(BlueprintCallable)
    FText GetPlayerShoutTextBasic(FPlayerShout ShoutData);
    
};

