#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CampaignCinematic.h"
#include "StrategyViewChangedDelegate.h"
#include "StrategyViewConfiguration.h"
#include "StrategyViewManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyViewManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ViewConfigurationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyViewConfiguration> ViewConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyViewConfiguration ActiveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyViewConfiguration LastView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QueuedViewTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> LastViewTabTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LastLoadoutViewTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ViewRootTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NeverReturnToViews;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyViewChanged OnStrategyViewChanged;
    
    UStrategyViewManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPlanetaryCompactWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    void SetStrategyView(FGameplayTag ViewTag, bool bCanChangeFromCinematics);
    
    UFUNCTION(BlueprintCallable)
    void RefreshView();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicsFinished(const FCampaignCinematic& Cinematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyViewConfiguration GetViewConfigurationFor(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActiveViewMatchesTag(FGameplayTag InTag, bool ExactMatch) const;
    
};

