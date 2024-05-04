#pragma once
#include "CoreMinimal.h"
#include "AttributeLinkedComponent.h"
#include "Damage.h"
#include "ReplicatedDamageContainer.h"
#include "Resource.h"
#include "ResourceChangedDelegateDelegate.h"
#include "ArmorComponent.generated.h"

class APawn;
class UFMODEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UArmorComponent : public UAttributeLinkedComponent, public IResource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResistanceChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnArmorValueChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArmorBlocksChanged, int32, Blocks);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Armor, meta=(AllowPrivateAccess=true))
    float Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bArmorRegenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedArmorDamage, meta=(AllowPrivateAccess=true))
    FReplicatedDamageContainer ReplicatedArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorBlocks, meta=(AllowPrivateAccess=true))
    int32 ArmorBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorBlocksMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPerBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorBlockRegenerationTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedArmorBlocksDamage, meta=(AllowPrivateAccess=true))
    FReplicatedDamageContainer ReplicatedArmorBlocksDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArmorBlocksChanged OnArmorBlocksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResistanceChanged OnResistanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateDamageOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ArmorShredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTakenDestructive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTakenEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTakenKinetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceDestructive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceKinetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OutOfArmorSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceChangedDelegate OnArmorChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsExposed, meta=(AllowPrivateAccess=true))
    bool bIsExposed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArmorValueChanged OnArmorValueChanged;
    
    UArmorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ShredBlocks(int32 Amount, APawn* DamageInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetExposed(bool bExposed);
    
    UFUNCTION(BlueprintCallable)
    void RestoreBlocks(int32 Amount, bool ModifyArmorValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessDamage(UPARAM(Ref) FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedArmorDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedArmorBlocksDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsExposed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorBlocks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Armor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPerBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorKineticResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorEnergyResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorDestructiveResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocksMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasEnoughResources(int32 Required) const override PURE_VIRTUAL(HasEnoughResources, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimulatedResourceDelta() const override PURE_VIRTUAL(GetSimulatedResourceDelta, return 0;);
    
    UFUNCTION(BlueprintCallable)
    float GetResources() const override PURE_VIRTUAL(GetResources, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetReservedResources() const override PURE_VIRTUAL(GetReservedResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    UFMODEvent* GetOutOfResourcesSound() const override PURE_VIRTUAL(GetOutOfResourcesSound, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaximumResources() const override PURE_VIRTUAL(GetMaximumResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvailableResources() const override PURE_VIRTUAL(GetAvailableResources, return 0;);
    
};

