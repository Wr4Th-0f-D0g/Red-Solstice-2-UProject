#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_MissionBase.generated.h"

class AMissionBase;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_MissionBase : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CompletedSubObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMissionBase> Mission;
    
    UBTTask_MissionBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SkipTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTaskFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<TSoftObjectPtr<UObject>> K2_GetListOfObjectsToPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<TSoftClassPtr<UObject>> K2_GetListOfClassesToPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FGameplayTag> K2_GetFollowerTagsToLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FGameplayTag> K2_GetEnemyMarineTagsToLoad() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionBase* GetMissionPawn() const;
    
};

