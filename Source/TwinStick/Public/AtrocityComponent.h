#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MonsterComponentBase.h"
#include "Templates/SubclassOf.h"
#include "AtrocityComponent.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAtrocityComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RockActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RockThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RockDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RockLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RockThrowTag;
    
    UAtrocityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ThrowRock_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ThrowRock();
    
    UFUNCTION(BlueprintCallable)
    void MovePosition_Internal();
    
    UFUNCTION(BlueprintCallable)
    void MovePosition();
    
    UFUNCTION(BlueprintCallable)
    void MaterializeRock();
    
    UFUNCTION(BlueprintCallable)
    void DropRock();
    
};

