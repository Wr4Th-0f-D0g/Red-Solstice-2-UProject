#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/NetSerialization.h"
#include "AspectInterface.h"
#include "AspectValueSet.h"
#include "Damagable.h"
#include "Damage.h"
#include "DynamicActorBase.h"
#include "EAttribute.h"
#include "EDamageGroup.h"
#include "ESolsticeTeam.h"
#include "ExplosionDamage.h"
#include "ExplosionDecal.h"
#include "ExplosionEffects.h"
#include "InteractionInterface.h"
#include "SolsticeSignificanceInterface.h"
#include "Templates/SubclassOf.h"
#include "AbilityActorBase.generated.h"

class AAbilityActorBase;
class AActor;
class APawn;
class UAbilityBase;
class UActionObjectExplode;
class UArmorComponent;
class UAttributeComponent;
class UCapsuleComponent;
class UDamageComponent;
class UEnergyComponent;
class UHealthComponent;
class UInteractableComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAbilityActorBase : public ADynamicActorBase, public IAspectInterface, public IInteractionInterface, public IDamagable, public IGenericTeamAgentInterface, public ISolsticeSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SignificanceTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSignificanceManagement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> AbilityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAspectValueSet AspectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityActorLevel, meta=(AllowPrivateAccess=true))
    int32 AbilityActorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AbilityRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AspectPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* RealDamageSourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponentA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnergyComponent* EnergyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EAttribute> AspectImportMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionDecal DetonationDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionEffects DetonationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    AAbilityActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    UActionObjectExplode* SpawnExplosionObject(const FTransform& Transform, bool bIgnoreInstigator, FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    AAbilityActorBase* SpawnAbilityActorWithTarget(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform, FVector_NetQuantize10 InTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    AAbilityActorBase* SpawnAbilityActor(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldManageSignificance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ESolsticeTeam InTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityActorLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadAspectsDataForLevel(int32 AspectLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionStarted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& InteractionInstigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionAborted(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute InAttribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* InActor, const FDamage& InDamage, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorDamaged(AActor* InActor, const FDamage& InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeTeam GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UClass* GetRealDamageSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNormalAtImpactPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionEffects GetExplosionEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionDecal GetExplosionDecal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FExplosionDamage GetExplosionDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAspectValueSet GetAspectValueSet() const;
    

    // Fix for true pure virtual functions not being implemented
};

