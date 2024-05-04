#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttributeLinkedComponent.h"
#include "Damage.h"
#include "Templates/SubclassOf.h"
#include "SuppressionComponent.generated.h"

class APawn;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USuppressionComponent : public UAttributeLinkedComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSuppressionChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuppressedChanged, bool, bNewSuppressed);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructiveSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergySuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KineticSuppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructiveSuppressionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergySuppressionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KineticSuppressionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialRegenerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionRegenerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Suppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSuppressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsStunned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuppressionChanged OnSuppressionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StunApplyIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SuppressionApplyIgnoreTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuppressedChanged OnSuppressedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuppressedChanged OnStunnedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> SuppressedBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> StunnedBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructiveDamageOverflowToSuppressionMultiplier;
    
    USuppressionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSuppressionToMaximum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessDamage(UPARAM(Ref) FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleDamageOverflow(const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionRegenerationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSuppression();
    
    UFUNCTION(BlueprintCallable)
    void ClearStun();
    
    UFUNCTION(BlueprintCallable)
    void ApplySuppression();
    
    UFUNCTION(BlueprintCallable)
    void ApplyStun(APawn* StunInstigator);
    
    UFUNCTION(BlueprintCallable)
    void AddSuppression(float Amount, APawn* SuppressionInstigator, UClass* DamageSourceClass);
    
};

