#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BTTask_WaitHunter.generated.h"

class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_WaitHunter : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitBeforeMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* CachedMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedOwnerComp;
    
    UBTTask_WaitHunter();

    UFUNCTION(BlueprintCallable)
    void TagAdded(ASolsticeCharacterBase* Character, FGameplayTag UpdatedTag);
    
};

