#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionTaskBase.h"
#include "Templates/SubclassOf.h"
#include "SuppressTargetTask.generated.h"

class AActor;
class AMinimapActorBase;
class APawn;
class UObject;
class USolsticeBuffBase;
class USuppressTargetTask;

UCLASS(Blueprintable)
class TWINSTICK_API USuppressTargetTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectiveUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdated ObjectiveUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* TargetMinimapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bApplyBuffOnSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bApplyBuffOnDeath;
    
public:
    USuppressTargetTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USuppressTargetTask* StartSuppressTargetTask(UObject* WorldContextObject, FText MissionName, TSubclassOf<AActor> NewActorClass, FGameplayTagContainer NewTargetTags, TSubclassOf<USolsticeBuffBase> NewBuffClass, bool NewBApplyBuffOnSuppression, bool NewBApplyBuffOnDeath);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTargetSuppressed(bool bNewSuppressed);
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetKilled(AActor* TargetA, APawn* PawnInstigator);
    
};

