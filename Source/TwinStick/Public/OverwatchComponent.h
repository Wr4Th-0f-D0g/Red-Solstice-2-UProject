#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttributeLinkedComponent.h"
#include "OverwatchStatusChangedDelegate.h"
#include "OverwatchTargetSelectedDelegate.h"
#include "OverwatchComponent.generated.h"

class AActor;
class APawn;
class UFMODEvent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UOverwatchComponent : public UAttributeLinkedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverwatchBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchTargetingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchRetargetCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverwatchIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OverwatchOnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OverwatchOffSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverwatchTargetingEffect;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLineTracedGetFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMinimumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestFeetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetOnlyMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DestroyableFallbackTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverwatchTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverwatchTargetSelected OnOverwatchTargetSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverwatchStatusChanged OnOverwatchStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ExtraIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FallbackIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FallbackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PriorityTarget;
    
public:
    UOverwatchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPriorityTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetFallbackTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredActor(AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchTargetKilled(AActor* KilledTarget, APawn* PawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void FindOverwatchTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableOverwatch();
    
    UFUNCTION(BlueprintCallable)
    void DisableOverwatch();
    
    UFUNCTION(BlueprintCallable)
    void ClearPriorityTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void AddFallbackIgnoredActor(AActor* InActor);
    
};

