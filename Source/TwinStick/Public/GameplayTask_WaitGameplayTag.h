#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "GameplayTask_WaitGameplayTag.generated.h"

class ASolsticeCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_WaitGameplayTag : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* OptionalExternalTarget;
    
public:
    UGameplayTask_WaitGameplayTag(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

