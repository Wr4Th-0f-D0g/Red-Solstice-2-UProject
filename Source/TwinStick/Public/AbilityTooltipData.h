#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AbilityToolTipAspect.h"
#include "AbilityTooltipAspectGroup.h"
#include "CustomTooltipFormatting.h"
#include "CustomTooltipText.h"
#include "EAspectDisplayGroup.h"
#include "EAttribute.h"
#include "EDamageGroup.h"
#include "AbilityTooltipData.generated.h"

class UAbilityBase;
class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UAbilityTooltipData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AspectDescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuffDescriptionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, FName> AttributeInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomTooltipFormatting> CustomFormattingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageGroup, FCustomTooltipFormatting> DamageFormattingOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAspectDisplayGroup, FCustomTooltipFormatting> AspectGroupFormattingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisplayedGrantedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisplayedClearedTags;
    
    UAbilityTooltipData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCustomTooltipText MakeTooltipTextWithFormatting(FText Text, const FCustomTooltipFormatting& Formatting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCustomTooltipFormatting MakeTooltipFormatSettings(UTexture2D* Icon, FLinearColor HighlightColor, FLinearColor NormalColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCustomTooltipText MakeSimpleTooltipText(FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetGrantedTagsForAspectGroup(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCustomTooltipFormatting GetFormattingSettings(const FAbilityToolTipAspect& Aspect, bool& HasCustomFormatting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetClearedTagsForAspectGroup(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttributeValues(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup, TArray<FAbilityToolTipAspect>& OutAspects, bool bShowBuffDurations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAspectValues(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup, TArray<FAbilityToolTipAspect>& OutAspects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAspectText(const FAbilityToolTipAspect& Aspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAspectGroups(UAbilityBase* Ability, TArray<FAbilityTooltipAspectGroup>& OutGroups, bool bShowDefinitionBuffDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAspectDisplayType(const FAbilityToolTipAspect& Aspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCustomTooltipText> GetAllAspectValues(const FAbilityToolTipAspect& Aspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAbilityGrantedTags(UAbilityBase* Ability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAbilityClearedTags(UAbilityBase* Ability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AbilityHasActiveBuff(UAbilityBase* Ability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AbiilityHasPassiveBuff(UAbilityBase* Ability) const;
    
};

