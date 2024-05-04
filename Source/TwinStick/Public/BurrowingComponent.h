#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BurrowingDelDelegate.h"
#include "ESolsticeDebugTraceType.h"
#include "MonsterComponentBase.h"
#include "BurrowingComponent.generated.h"

class ABiomassCenterActor;
class UAnimMontage;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UBurrowingComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* UnburrowParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurrowParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UnburrowPointGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabClosestBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeDebugTraceType TraceDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugLineDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnburrowZOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowingDel OnBurrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowingDel OnUnburrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowingDel OnBurrowFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowingDel OnUnburrowFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BurrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnburrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomFloorDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnUnderground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBurrowUnburrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageFinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomassCenterActor* HomeBiomass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BurrowedTagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BurrowedTagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnburrowedTagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnburrowedTagsToRemove;
    
    UBurrowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Unburrow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleFloorParticle(bool bTurnOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHoleParticle(bool bUnburrowing, const FVector& HoleLocation);
    
    UFUNCTION(BlueprintCallable)
    void PlayUnburrowMontage(const FVector& UnburrowLoc);
    
    UFUNCTION(BlueprintCallable)
    void PlayBurrowMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ToggleParticles(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ShowHoleParticle(bool bUnburrow, const FVector& HoleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UnburrowingFinished(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_Unburrow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BurrowingFinished(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_Burrow();
    
    UFUNCTION(BlueprintCallable)
    bool CanUnburrowSafely();
    
    UFUNCTION(BlueprintCallable)
    bool Burrow();
    
};

