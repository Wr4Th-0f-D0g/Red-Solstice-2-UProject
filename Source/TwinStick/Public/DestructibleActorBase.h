#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "Damagable.h"
#include "Damage.h"
#include "DynamicActorBase.h"
#include "EIndicatorType.h"
#include "ESolsticeTeam.h"
#include "HoverInfoInterface.h"
#include "Templates/SubclassOf.h"
#include "DestructibleActorBase.generated.h"

class AActor;
class AController;
class UArmorComponent;
class UAttributeComponent;
class UHealthComponent;
class UInteractableComponent;
class UInteractionWidgetBase;

UCLASS(Blueprintable)
class TWINSTICK_API ADestructibleActorBase : public ADynamicActorBase, public IDamagable, public IGenericTeamAgentInterface, public IHoverInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionWidgetBase> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotRegisterStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    ADestructibleActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ESolsticeTeam NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeTeam GetTeamEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorKilledClient();
    

    // Fix for true pure virtual functions not being implemented
};

