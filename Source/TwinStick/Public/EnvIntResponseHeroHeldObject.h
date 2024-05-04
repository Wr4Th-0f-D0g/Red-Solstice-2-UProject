#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EnvIntResponseBase.h"
#include "Templates/SubclassOf.h"
#include "EnvIntResponseHeroHeldObject.generated.h"

class AActor;
class ASolsticeCharacterBase;
class UAnimMontage;
class UHoldableObjectAsItemBase;
class UInteractableComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UEnvIntResponseHeroHeldObject : public UEnvIntResponseBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHoldableObjectAsItemBase> ItemTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimNotifyGrabedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* ActiveInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoldableObjectAsItemBase* AsItemInstance;
    
public:
    UEnvIntResponseHeroHeldObject();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InUpdatedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageEnded(UAnimMontage* InMontage, bool InInterrupted);
    
    UFUNCTION()
    void HandleAnimationNotifyHit(FName InNotifyName, const FBranchingPointNotifyPayload& InBranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* InKilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void FailsafeTriggered();
    
};

