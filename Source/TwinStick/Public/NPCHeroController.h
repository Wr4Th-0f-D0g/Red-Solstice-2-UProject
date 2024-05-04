#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "HeroControllerBase.h"
#include "PerceivedActor.h"
#include "Templates/SubclassOf.h"
#include "NPCHeroController.generated.h"

class AActor;
class ASolsticeWeaponBase;
class UBehaviorTree;

UCLASS(Blueprintable)
class TWINSTICK_API ANPCHeroController : public AHeroControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> DefaultBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaypointVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaypointActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GuardActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerceivedActor> PerceivedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomLocationForAuto;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbilityTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WeaponTargetActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WeaponTargetActor;
    
public:
    ANPCHeroController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnequipWeapon(ASolsticeWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void StartDefaultBehaviorTree();
    
    UFUNCTION(BlueprintCallable)
    void SetGuardActor(AActor* InGuardActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void HandlePerceptionUpdated(const TArray<AActor*>& PerceptionActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetWeaponTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPerceivedActor> GetHostilesPerceivedActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPerceivedActor> GetFriendlyPerceivedActors() const;
    
    UFUNCTION(BlueprintCallable)
    void EqupWeapon(ASolsticeWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void DropActiveWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFireSecondaryShot(const FVector& ShotLoc) const;
    
};

