#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityActorBase.h"
#include "AuraBuffDefinition.h"
#include "Templates/SubclassOf.h"
#include "AuraBuffActor.generated.h"

class AActor;
class AAuraBuffActor;
class UAbilityBase;
class USceneComponent;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API AAuraBuffActor : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuraBuffDefinition> AppliedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USolsticeBuffBase*> ActiveBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnabled;
    
    AAuraBuffActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AAuraBuffActor* SpawnAreaBuffActor(TSubclassOf<AAuraBuffActor> AuraClass, FTransform SpawnTransform, const TArray<FAuraBuffDefinition>& Buffs, UAbilityBase* OwningAbility, USceneComponent* AttachComponent, FName AttachSocketName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuffs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetBuffDurationModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffApplied(const AActor* Target, TSubclassOf<USolsticeBuffBase> BuffClass);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBuffs();
    
};

