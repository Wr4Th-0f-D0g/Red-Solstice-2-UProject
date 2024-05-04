#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "Item.h"
#include "Templates/SubclassOf.h"
#include "HoldableObjectAsItemBase.generated.h"

class AActor;
class AHoldableObjectBase;
class APawn;
class ASolsticeCharacterBase;
class UAnimMontage;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHoldableObjectAsItemBase : public UItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeldObject, meta=(AllowPrivateAccess=true))
    AHoldableObjectBase* HeldObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupAndThrowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimNotifyThrownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> HoldingObjectBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickedUpTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* AppliedBuff;
    
public:
    UHoldableObjectAsItemBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHeldObject(AHoldableObjectBase* InBarrel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformSpecificInitialAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformSpecificHeldItemFailsafeReleaseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformSpecificHeldItemDropAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformSpecificCleanupActions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformSpecificActivationAction(FVector InTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeldObject();
    
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InUpdatedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageEnded(UAnimMontage* InMontage, bool InInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InInteractableActor, const TArray<APawn*>& InInstigators, bool bInSuccess);
    
public:
    UFUNCTION()
    void HandleAnimationNotifyHit(FName InNotifyName, const FBranchingPointNotifyPayload& InBranchingPointPayload);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* InKilledActor, const FDamage& DamageInfo, bool bRecentlyDead);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMe();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ClientFailsafeCalled();
    
};

