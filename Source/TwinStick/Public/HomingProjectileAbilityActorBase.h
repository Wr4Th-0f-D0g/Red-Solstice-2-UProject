#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityActorBase.h"
#include "HomingProjectileStruct.h"
#include "HomingProjectileAbilityActorBase.generated.h"

class UFMODEvent;
class UParticleSystem;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AHomingProjectileAbilityActorBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ProjectileParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ProjectileLaunchParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ProjectileFlightSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ProjectileLaunchSound;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationHistoryUpdateTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionTestUpdateTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumHistoryTargetLocations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructionCheckTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationHistoryLocationValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHomingMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHomingMagnitude;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHomeToNonTargetable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ObstructingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileSelfDestructTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTriggerDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTriggerDeltaZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOvershootHomingMagnitudeMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachedHistoryLocationActivateDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttemptToNetworkSyncMovement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawCollisionTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHomingProjectileStruct> LaunchedProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHomingProjectileStruct> InactiveProjectilePool;
    
public:
    AHomingProjectileAbilityActorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerProjectileAction(const FGameplayTag& InReason, UPARAM(Ref) USceneComponent*& InTriggeringComponent, UPARAM(Ref) FHomingProjectileStruct& InProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TestForActionTrigger(FGameplayTag& OutReason, USceneComponent*& OutTriggeringComponent, FHomingProjectileStruct& InProjectile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRemoveProjectile(const FGameplayTag& InReason, const USceneComponent* InTriggeringComponent, const FHomingProjectileStruct& InProjectile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectileTargetObstructed(FHomingProjectileStruct& InProjectile) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetProjectileByIndex(FHomingProjectileStruct& OutProjectileStruct, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumMissilesToPregenerate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInitSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHomingMagnitude(const FHomingProjectileStruct& InProjectile) const;
    
    UFUNCTION(BlueprintCallable)
    int32 FireProjectileInternal(const FTransform& InInitTransform, USceneComponent* InTargetComponent, FVector InTargetLocation);
    
};

