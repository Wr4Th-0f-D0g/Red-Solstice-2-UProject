#pragma once
#include "CoreMinimal.h"
#include "Damage.h"
#include "EDamageGroup.h"
#include "HealthBarWidgetBase.h"
#include "SmallHealthBarWidget.generated.h"

class AActor;
class UHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USmallHealthBarWidget : public UHealthBarWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBindHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfHighResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighResistanceWarningTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldHPPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComp;
    
public:
    USmallHealthBarWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighResistanceWarning(EDamageGroup DamageType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HealthChanged(UHealthComponent* HealthComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleHealthChanged(int32 CurrentResources, int32 OriginalResources);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo);
    
};

