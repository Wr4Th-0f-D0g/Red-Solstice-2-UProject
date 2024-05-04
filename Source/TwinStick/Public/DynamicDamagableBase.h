#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "Damagable.h"
#include "Damage.h"
#include "DynamicInteractableBase.h"
#include "ESolsticeTeam.h"
#include "DynamicDamagableBase.generated.h"

class AActor;
class UArmorComponent;
class UAttributeComponent;
class UBoxComponent;
class UDamageComponent;
class UHealthComponent;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADynamicDamagableBase : public ADynamicInteractableBase, public IDamagable, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DamagableArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    ADynamicDamagableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeam(ESolsticeTeam NewTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocksMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    

    // Fix for true pure virtual functions not being implemented
};

