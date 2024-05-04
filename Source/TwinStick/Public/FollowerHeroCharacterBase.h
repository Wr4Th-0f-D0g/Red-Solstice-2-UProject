#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIMarineHeroCharacterBase.h"
#include "EFiringMode.h"
#include "FiringMode.h"
#include "SecondaryWeaponTargetSetDelegate.h"
#include "FollowerHeroCharacterBase.generated.h"

class AActor;
class AHeroCharacterBase;
class UFollowerComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AFollowerHeroCharacterBase : public AAIMarineHeroCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OverwatchTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HighThreatToAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackPeddleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BackPeddleOnTargetIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowerComponent* CachedFollowerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFireSecondaryShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowerScriptedByDefault;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSecondaryWeaponTargetSet OnSecondaryWeaponTargetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SecondaryWeaponTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringMode InitialFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScriptedBot;
    
public:
    AFollowerHeroCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverwatchTargetChanged(AActor* InNewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MeleeTimerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSecondaryWeaponTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckForSecondaryWeaponTargeted();
    
    UFUNCTION(BlueprintCallable)
    void CheckForCloseHighThreat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanEvac() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignedPlayerFireModeChanged(FFiringMode FiringMode);
    
    UFUNCTION(BlueprintCallable)
    void AssignedPlayerAttackTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void AssignedHeroChanged(AHeroCharacterBase* NewAssignedHero, AHeroCharacterBase* OldAssignedHero);
    
};

