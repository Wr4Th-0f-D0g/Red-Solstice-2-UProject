#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ActiveResearch.h"
#include "EResearchSpeed.h"
#include "EventListInterface.h"
#include "MarsTime.h"
#include "ResearchListRefreshedDelegate.h"
#include "ResearchStatusChangedDelegate.h"
#include "SolsticeAttributeModifier.h"
#include "SolsticeSaveInterface.h"
#include "SolsticeTechData.h"
#include "Templates/SubclassOf.h"
#include "StrategyResearchManager.generated.h"

class UCampaign;
class UDataTable;
class UEngineeringData;
class UEventWidgetBase;
class UNotificationWidgetBase;
class USolsticeBuffBase;
class UTechObject;
class UTechTreeData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyResearchManager : public UActorComponent, public IGameplayTagAssetInterface, public IEventListInterface, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNotificationWidgetBase> NoResearchNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNotificationWidgetBase* NoResearchNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventWidgetBase> ResearchInProgressWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventWidgetBase* ResearchInProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResearchedTechs, meta=(AllowPrivateAccess=true))
    TArray<UTechObject*> ResearchedTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailableTechs, meta=(AllowPrivateAccess=true))
    TArray<UTechObject*> AvailableTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTechObject*> UnavailableTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TechsIgnoredForBigBrain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResearchStatusChanged OnResearchCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResearchStatusChanged OnResearchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResearchStatusChanged OnResearchPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResearchPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResearchListRefreshed OnResearchListRefreshed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentResearch, meta=(AllowPrivateAccess=true))
    FActiveResearch CurrentResearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FActiveResearch> ActiveResearchList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEngineeringData* ItemsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TechDescriptionsTable;
    
    UStrategyResearchManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TechHasMultiplePrerequisites(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ShowResearchInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowNoResearchNotification();
    
    UFUNCTION(BlueprintCallable)
    void Research(UTechObject* Tech);
    
    UFUNCTION(BlueprintCallable)
    void RemoveResearchInProgressWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNoResearchNotification();
    
    UFUNCTION(BlueprintCallable)
    void PauseResearch(UTechObject* Tech);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResearchedTechs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentResearch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableTechs();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastShowTechResearchedCTA(FGameplayTag TechTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsPrerequisites(const UTechObject* InTech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResearchCompletedByTech(UTechObject* InTech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResearchCompletedByTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSuppliesToStartResearch(const UTechObject* Tech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedResearchFor(UTechObject* InTech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialistsToStartResearch(const UTechObject* Tech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFacilitiesToStartResearch(const UTechObject* Tech) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleResearchFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleCampaignProgressTagAdded(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetWeaponNamesUnlockedByResearch(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTechUnlockedByResearch(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeTechData GetTechDataFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplyCostFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSuitModulesUnlockedByResearch(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSolsticeAttributeModifier> GetStackableModifiersFromResearch(FGameplayTag ResearchTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScientistCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResourcesGrantedByResearch(FGameplayTag TechTag, int32& OutSupplies, int32& OutDeployment, int32& OutSpecialists) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarsTime GetResearchTimeRemainingFor(UTechObject* InTech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResearchSpeed GetResearchSpeedForTechAbstracted(int32 SpecialistCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResearchSpeedForTech(int32 SpecialistCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResearchSpeed GetResearchSpeedAbstracted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResearchSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResearchPercentFor(UTechObject* InTech) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarsTime GetRemainingResearchTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMobileLabLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetEngineeringItemsUnlockedByResearch(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActiveResearch GetCurrentResearch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechObject* GetCurrentlyResearchedTech() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<TSubclassOf<USolsticeBuffBase>> GetCombatBuffsFromResearch(FGameplayTag ResearchTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetClassSuitsUnlockedByResearch(FGameplayTag TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaign* GetCampaignObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTechTreeData*> GetAllTechTrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllTechsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllTechs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllTechRequiring(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllResearchedTagsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllAvailableTechsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishResearch(UTechObject* Tech);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartResearch(const UTechObject* Tech) const;
    
    UFUNCTION(BlueprintCallable)
    void AddResearch(FGameplayTag TechTag, bool bSkipBroadcast);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

