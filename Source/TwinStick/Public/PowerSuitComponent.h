#pragma once
#include "CoreMinimal.h"
#include "EnergyComponent.h"
#include "ExperienceChangedDelegate.h"
#include "RevivedDelegate.h"
#include "SkillPointsChangedDelegate.h"
#include "SuitLevelChangedDelegate.h"
#include "PowerSuitComponent.generated.h"

class UCurveFloat;
class UHeroSkillsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPowerSuitComponent : public UEnergyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHeroSkillsComponent> SkillsComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuitIntegrityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SuitIntegrity, meta=(AllowPrivateAccess=true))
    int32 SuitIntegrity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevivalInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDowned;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevived OnRevived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProgressXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Experience, meta=(AllowPrivateAccess=true))
    int32 CurrentExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkillPointsInvested, meta=(AllowPrivateAccess=true))
    int32 SkillPointsInvested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkillPoints, meta=(AllowPrivateAccess=true))
    int32 SkillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyGainPerLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceTowardNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceRequiredForNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExperienceProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExperienceChanged OnExperienceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 SuitLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuitLevelChanged OnSuitLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSuitLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillPointsChanged OnSkillPointsChanged;
    
    UPowerSuitComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSuitIntegrity(int32 NewIntegrity);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPoints(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumSuitLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Revive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SuitIntegrity();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillPointsInvested(int32 PreviousInvested);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillPoints(int32 PreviousSkillPoints);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Level(int32 PreviousLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Experience(int32 PreviousExperience);
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementMaximumSuitLevel();
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterDowned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSuitLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSuitIntegrity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperience() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSkillPoints();
    
    UFUNCTION(BlueprintCallable)
    void DrainSkillPoint();
    
    UFUNCTION(BlueprintCallable)
    void DrainLevel();
    
    UFUNCTION(BlueprintCallable)
    void AwardXP(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AwardSkillPoints(int32 InPoints);
    
    UFUNCTION(BlueprintCallable)
    void AwardSkillPoint();
    
    UFUNCTION(BlueprintCallable)
    void AwardLevel();
    
};

