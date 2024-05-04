#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "CorsairSubsystem.generated.h"

class AActor;
class AHeroCharacterBase;
class ARegion;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UCorsairSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCorsairSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetState(FGameplayTag InStateGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void SetEvent(FGameplayTag InEventGameplayTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCorsairState(const UObject* WorldContextObject, FGameplayTag StateTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCorsairExplosionEvent(const UObject* WorldContextObject, float Damage, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCorsairEvent(const UObject* WorldContextObject, FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrategyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSolarFired(ARegion* TargetRegion);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroRevived(AHeroCharacterBase* RevivedHero);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroPromoted(AHeroCharacterBase* Hero, int32 ToRank);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroKilled(AActor* Hero, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroHealthChanged(int32 CurrentHealth, int32 PreviousHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeroDamaged(AActor* Hero, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleGlobalInfestationChanged(float PreviousInfestation, float CurrentInfestation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FString> GetLightingStatesMap() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetCorsairStates(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearState(FGameplayTag InStateGameplayTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearCorsairState(const UObject* WorldContextObject, FGameplayTag StateTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllStates();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllCorsairState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CallExplosion(float InRadius, float InDamage);
    
};

