#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BurrowingMonsterStatusDelegateDelegate.h"
#include "Damage.h"
#include "EBurrowingState.h"
#include "ESolsticeDebugTraceType.h"
#include "MonsterComponentBase.h"
#include "BurrowingMonsterComponentBase.generated.h"

class AActor;
class ABiomassCenterActor;
class UAnimMontage;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UBurrowingMonsterComponentBase : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowingMonsterStatusDelegate OnChangedBurrowedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableBurrowResonator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BurrowDisallowQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery UnBurrowDisallowQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabClosestBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomassCenterActor* HomeBiomass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UnburrowPointGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnBurrowingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BurrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnburrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterFloorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBurrowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBurrowUnburrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageFinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemoveOnBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* UnburrowParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurrowParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnburrowZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeDebugTraceType TraceDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugLineDuration;
    
public:
    UBurrowingMonsterComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Unburrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TraceToFindSurface(FVector& OutSurfacePoint, FHitResult& TraceResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleBurrowedParticle(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHoleParticle(bool bUnburrowing, const FVector& HoleLocation);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ToggleBurrowedParticle(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ShowHoleParticle(bool bUnburrowing, const FVector& HoleLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void MonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ChangedBurrowedState(EBurrowingState NewBurrowingState, EBurrowingState PreviousBurrowingState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasClearUnburrowRadius(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBurrowingState GetBurrowingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUnburrowSafely() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEnterUnBurrowState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEnterBurrowState() const;
    
    UFUNCTION(BlueprintCallable)
    bool Burrow();
    
};

