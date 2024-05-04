#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ECorporation.h"
#include "SolsticeAttributeModifier.h"
#include "SolsticeTechData.h"
#include "Templates/SubclassOf.h"
#include "PlayerDataAsset.generated.h"

class AAbilityDroneBase;
class UCustomSkinDataAsset;
class UDataTable;
class UStrategyCampaignData;
class UTechTreeData;

UCLASS(Blueprintable)
class TWINSTICK_API UPlayerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerRanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DailyChallengeExperienceBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DailyChallengeExperienceBonusReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomSkinDataAsset*> CustomSkinDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FreeSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECorporation, FGameplayTag> CorporationToCampaignTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UStrategyCampaignData>> CampaignDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumProfilePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ReleasedDLCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTechTreeData*> ProfileTechTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<AAbilityDroneBase>> CustomSkinDroneClasses;
    
    UPlayerDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasDLC(int32 DLCCode, bool CheckDefaultPass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeTechData GetTechData(const FGameplayTag& TechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AAbilityDroneBase> GetDroneClassForCustomSkin(FGameplayTag CustomSkinTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCustomSkinDataAsset* GetCustomSkinFor(FGameplayTag SkinTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStrategyCampaignData* GetCampaignDataFor(FGameplayTag InCampaignSelectionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCustomSkinDataAsset*> GetAvailableSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeModifier> GetAttributeModifiersForTech(const FGameplayTag& TechTag) const;
    
};

