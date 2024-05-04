#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "ProfileSkillTreeBase.generated.h"

class UPlayerDataAsset;
class UTechTreeData;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UProfileSkillTreeBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDataAsset* PlayerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> GroupTitlesMap;
    
    UProfileSkillTreeBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TreeIsSkirmishOnlyByTag(FGameplayTag TreeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UTechTreeData*> GetSortedTechTreesForDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FString> GetDropdownListEntries() const;
    
};

