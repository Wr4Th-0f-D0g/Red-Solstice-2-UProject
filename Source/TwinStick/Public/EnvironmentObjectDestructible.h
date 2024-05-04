#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "Damagable.h"
#include "Damage.h"
#include "EnvironmentObjectBase.h"
#include "EnvironmentObjectDestructible.generated.h"

class AActor;
class UArmorComponent;
class UAttributeComponent;
class UDamageComponent;
class UHealthComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AEnvironmentObjectDestructible : public AEnvironmentObjectBase, public IDamagable, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    AEnvironmentObjectDestructible(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorKilledClient();
    

    // Fix for true pure virtual functions not being implemented
};

