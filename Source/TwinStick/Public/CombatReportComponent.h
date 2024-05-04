#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EStrategyMissionResult.h"
#include "MissionEffect.h"
#include "MissionEffectContainer.h"
#include "CombatReportComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UCombatReportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeploymentCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStrategyMissionResult PrimaryMissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer MissionSuccessEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer MissionFailureEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer SecondaryEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHQ_HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndingHQ_HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHQ_MaxHitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRevolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionGrantedTechs;
    
    UCombatReportComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ExecuteSuccessEffects();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSecondaryEffects();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteMissionEffects();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteFailureEffects();
    
    UFUNCTION(BlueprintCallable)
    void AddSecondaryEffect(const FMissionEffect& Effect);
    
    UFUNCTION(BlueprintCallable)
    void AddPrimaryMissionEffect(const FMissionEffectContainer& InEffectContainer);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionGrantedTechs(FGameplayTagContainer NewTechs);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionFailureEffect(const FMissionEffectContainer& InEffectContainer);
    
};

