#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EBurrowingState.h"
#include "BTTask_DoBurrowBurrower.generated.h"

class AMonsterCharacterBase;
class UBehaviorTreeComponent;
class UBurrowingMonsterComponentBase;

UCLASS(Blueprintable)
class TWINSTICK_API UBTTask_DoBurrowBurrower : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldBurrowKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBurrowingMonsterComponentBase* BurrowComp;
    
    UBTTask_DoBurrowBurrower();

    UFUNCTION(BlueprintCallable)
    void MonsterBurrowed(AMonsterCharacterBase* Monster, EBurrowingState NewState, EBurrowingState OldState);
    
};

