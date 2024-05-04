#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SolsticeTechData.h"
#include "StrategyMenuBase.h"
#include "ResearchWidget.generated.h"

class UCampaign;
class UTechButton;
class UTechObject;
class UTechTreeData;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UResearchWidget : public UStrategyMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* AvailableResearchVB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* CompletedResearchVB;
    
    UResearchWidget();

    UFUNCTION(BlueprintCallable)
    void HandleResearchStarted(UTechObject* InTech);
    
    UFUNCTION(BlueprintCallable)
    void HandleResearchCompleted(UTechObject* InTech);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechButton* GetWidgetForTech(const FSolsticeTechData& InTechData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaign* GetCampaignObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTechTreeData*> GetAllTechTrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllTechsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllTechs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllResearchedTagsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeTechData> GetAllAvailableTechsMatching(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyFilter(const FGameplayTag& InTag, bool InVisible);
    
};

