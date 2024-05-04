#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIMarineCharacterData.h"
#include "AIMarineSkillUseValidLocDelegate.h"
#include "CharacterWeaponData.h"
#include "EAttribute.h"
#include "EBossType.h"
#include "EEnemyThreatLevel.h"
#include "ESolsticeHeroClass.h"
#include "HeroCharacterBase.h"
#include "MarineBotSettings.h"
#include "PowerSuitModel.h"
#include "SolsticeAttributeData.h"
#include "AIMarineHeroCharacterBase.generated.h"

class UBehaviorTree;
class UBotStatus;
class UFMODEvent;
class UParticleSystem;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API AAIMarineHeroCharacterBase : public AHeroCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBotStatus* MyBotStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DialogSpeakerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomBotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetHiddenByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BotDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePowersuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrePlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePassedInHeroDetails;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMarineSkillUseValidLoc OnMarineSkillUseValidLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarineBotSettings MarineBotSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyPossessedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvacuating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterEvac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkill*> MeleeSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> MeleeOverlapQueryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeOverlapSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MeleeIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* OverrideBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PremadeHeroName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData PrimaryOverrideWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCharacterNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass AIMarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingAmmoPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingAmmoSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunBehaviourTreeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerSuitModel CachedPowerSuitModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialSkillsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMarineCharacterData BotCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideCharWidget, meta=(AllowPrivateAccess=true))
    bool bHideCharWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToInnerRadiusWhenAtOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PendingAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMeleeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleePlayRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAI;
    
public:
    AAIMarineHeroCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseSecondaryWeaponForSetTime(const FVector& Location, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMeleeSkillEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterWidgetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideCharWidget();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_PlayTeleportEffects(UFMODEvent* SoundEvent, UParticleSystem* Particle, const FVector_NetQuantize& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetCharacterWidgetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyThreatLevel GetThreatLevelEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReturnToInnerRadiusWhenAtOuterRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetQueryTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolOuterRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolInnerRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolIgnoreTraceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleePlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMeleeRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKillXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKillDestroyTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthWidgetTimeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEnemyMarineName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EAttribute, FSolsticeAttributeData> GetEnemyMarineAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBossType GetBossType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttackDoors() const;
    
};

