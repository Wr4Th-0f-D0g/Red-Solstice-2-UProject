#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StrategyViewConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SolsticeTutorialManager.generated.h"

class UDataTable;
class UTutorialPopupBase;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeTutorialManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChainFinished, FGameplayTag, PopupTag);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialPopupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialDisplayRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTutorialPopupBase> PopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTutorialPopupBase* CurrentTutorialPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> FinishedSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> TutorialToViewMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UWidget*> RegisteredTutorialWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkirmishSkippedTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChainFinished OnChainFinished;
    
    USolsticeTutorialManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTutorialDisplays();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorialForView(FGameplayTag ViewTag);
    
    UFUNCTION(BlueprintCallable)
    void StartSpecificTutorialChain(FGameplayTag ChainStarter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNextTutorial(const FGameplayTag& PopupTag);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidgetForTutorialTag(FGameplayTag TutorialTag, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnStrategyViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& OldView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPreviousTutorial(const FGameplayTag& TutorialTag);
    
    UFUNCTION(BlueprintCallable)
    void GoBackOneSegment(const FGameplayTag& PopupTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPreviousTutorialTag(const FGameplayTag& TutorialTag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllPopupTutorials();
    
    UFUNCTION(BlueprintCallable)
    void CompleteTutorialSegment(const FGameplayTag& PopupTag, bool TryToFinalize);
    
};

