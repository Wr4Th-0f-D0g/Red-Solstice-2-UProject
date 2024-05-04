#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CallToActionQueue.h"
#include "CallToActionShownChangedDelegate.h"
#include "EDropshipStatus.h"
#include "StrategyViewConfiguration.h"
#include "Templates/SubclassOf.h"
#include "CallToActionManager.generated.h"

class AOutpost;
class ARegion;
class AStrategyMission;
class UCallToActionBase;
class UDataTable;
class UEngineeringData;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UCallToActionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> OutpostDestroyedCTAClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ColonyDestroyedCTAClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> TerraformerDestroyedCTAClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallToActionQueue CallToActionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCallToActionBase* ActiveCallToActionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ChapterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ChapterWidgetClassBaseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> MissionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> FinalizeMissionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ResearchCompletedWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ResearchReportWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> NewTechWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> NewWeaponWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> NewModuleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> NewItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> NewPowerSuitWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> OutpostConstructionCompletedWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> OneMonthLaterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> ExecutorOrdersWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEngineeringData* ItemsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TechDescriptionTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallToActionShownChanged OnCallToActionShownChanged;
    
    UCallToActionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void QueueTerraformerDestroyed(ARegion* InRegion, bool bDestroyedBySolar);
    
    UFUNCTION(BlueprintCallable)
    void QueueTechCompleted(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void QueueStrategyMissionSpawned(AStrategyMission* InMission);
    
    UFUNCTION(BlueprintCallable)
    void QueueStrategyMissionCompleted(AStrategyMission* InMission);
    
    UFUNCTION(BlueprintCallable)
    void QueueOutpostDestroyed(ARegion* InRegion, bool bDestroyedBySolar);
    
    UFUNCTION(BlueprintCallable)
    void QueueOutpostConstructionCompleted(AOutpost* Outpost);
    
    UFUNCTION(BlueprintCallable)
    void QueueOneMonthLater();
    
    UFUNCTION(BlueprintCallable)
    void QueueColonyDestroyed(ARegion* InRegion, bool bDestroyedBySolar);
    
    UFUNCTION(BlueprintCallable)
    void QueueChapterStarted(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void QueueCallToActionByTag(FGameplayTag InTag, FGameplayTag InViewTag, TSubclassOf<UCallToActionBase> InWidgetClass, UObject* InContextObject, bool bCheckForUnlocks);
    
    UFUNCTION(BlueprintCallable)
    void QueueCallToActionByName(FName InName, FGameplayTag InViewTag, TSubclassOf<UCallToActionBase> InWidgetClass, UObject* InContextObject);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreCurrentCallToAction();
    
    UFUNCTION(BlueprintCallable)
    void HandleStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipStatusChanged(EDropshipStatus DropshipStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallToActionIgnored(UCallToActionBase* CallToActionWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallToActionConfirmed(UCallToActionBase* CallToActionWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetUnlockedWeaponNames(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedTechTags(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetUnlockedModuleNames(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedItemTags(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetUnlockedClassNames(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AcceptCurrentCallToAction();
    
};

