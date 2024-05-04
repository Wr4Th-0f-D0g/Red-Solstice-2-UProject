#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Damage.h"
#include "Templates/SubclassOf.h"
#include "Damagable.generated.h"

class AActor;
class UArmorComponent;
class UHealthBarWidgetBase;
class UHealthComponent;
class USuppressionComponent;

UINTERFACE(Blueprintable)
class UDamagable : public UInterface {
    GENERATED_BODY()
};

class IDamagable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UsesCustomHoverHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TogglePreviewDamagable(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleHovered(bool bNewHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowDetailedHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessDamage(UPARAM(Ref) FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTimeSinceDeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetThreatLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSuppressionComponent(USuppressionComponent*& SuppressionComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHealthComponent(UHealthComponent*& HealthComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHealthBarDetails(bool& bWantsHealthBar, bool& bUseLargeHealthBar, FVector& RelativePosition, TSubclassOf<UHealthBarWidgetBase>& CustomWidgetClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetBossType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetArmorComponent(UArmorComponent*& ArmorComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeTargeted(AActor* Requester) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AppliesFriendlyFireMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppliedDamage(AActor* DamagedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorKilled(const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorDamaged(const FDamage& DamageInfo);
    
};

