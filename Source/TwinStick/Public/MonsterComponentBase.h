#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MonsterComponentBase.generated.h"

class AMonsterCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMonsterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* OwningMonster;
    
public:
    UMonsterComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopBeginPlayTimers();
    
    UFUNCTION(BlueprintCallable)
    void StartBeginPlayTimers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterCharacterBase* GetOwningMonster() const;
    
};

