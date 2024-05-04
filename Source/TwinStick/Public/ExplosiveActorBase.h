#pragma once
#include "CoreMinimal.h"
#include "AbilityActorBase.h"
#include "ActorKilledDelegate.h"
#include "ExplosiveDestroyedDelegate.h"
#include "ExplosiveDetonatedDelegate.h"
#include "ExplosiveActorBase.generated.h"

class AActor;
class AExplosiveActorBase;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API AExplosiveActorBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndHover, AExplosiveActorBase*, Explosive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginHover, AExplosiveActorBase*, Explosive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosiveDestroyed OnExplosiveDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginHover OnBeginHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndHover OnEndHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRemoteDetonate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosiveDetonated OnExplosiveDetonated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreNextUnhover;
    
    AExplosiveActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PreviewDetonate();
    
    UFUNCTION(BlueprintCallable)
    void MarkIgnoreNextUnhover();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PreviewDetonate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EndPreviewDetonate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void K2_Detonated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetBaseExplosiveDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPreviewDetonate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndHover(AActor* Actor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Detonate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginHover(AActor* Actor);
    
};

