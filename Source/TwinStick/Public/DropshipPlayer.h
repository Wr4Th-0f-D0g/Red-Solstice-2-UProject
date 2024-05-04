#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "DropshipPlayer.generated.h"

class AActor;
class ADropshipAbilityActorBase;
class ASolsticeCharacterBase;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API UDropshipPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADropshipAbilityActorBase* Dropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* DropshipBuff;
    
    UDropshipPlayer();

protected:
    UFUNCTION(BlueprintCallable)
    void HandlePawnRiseMontageFinished(FGameplayTag NotifyTag, ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnRiseCancelledMontageFinished(FGameplayTag NotifyTag, ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable)
    void HandleMarineEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleMarineDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
};

