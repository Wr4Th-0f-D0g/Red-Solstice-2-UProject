#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CharacterData.h"
#include "EAttribute.h"
#include "ESolsticeHeroClass.h"
#include "ESuitSection.h"
#include "ESuitTier.h"
#include "PowerSuit.h"
#include "PowerSuitVisualDefinition.h"
#include "SolsticeAttributeValue.h"
#include "Templates/SubclassOf.h"
#include "CharacterDataAsset.generated.h"

class AHeroCharacterBase;
class UBotStatus;
class UCampaign;
class UDataTable;
class UExecutorSubsystem;
class UMarineClassData;
class UMaterialInterface;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UCharacterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHeroCharacterBase> HeroClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> WeaponsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SuitModulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CustomBotsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, float> DefaultAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, FName> MarineClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, FDataTableRowHandle> MarineClassLocalizationRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, UMarineClassData*> MarineClassDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESuitSection, UTexture2D*> SuitSectionIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitTier DefaultBotSuitTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PlayersToEngineeringInventorySlots;
    
    UCharacterDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnlockedSuitsForTier(ESuitTier SuitTier, int32 PlayerRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyResearchedSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSuitDisplayNameFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineClassData*> GetResearchedSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetProfileUnlockTagsFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterData GetPremadeDataForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterData GetPremadeDataForClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterData GetPremadeDataFor(FName MarineClassName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitVisualDefinition GetPowerSuitVisualForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitVisualDefinition GetPowerSuitVisualForClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitVisualDefinition GetPowerSuitVisualFor(FName MarineClassName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuit GetPowerSuitDataForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuit GetPowerSuitDataForClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuit GetPowerSuitDataFor(FName MarineClassName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineClassData* GetMarineDataForClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineClassData* GetMarineDataFor(FName MarineClassName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMarineClassName(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMarineClassDisplayText(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconForSuitSection(ESuitSection SuitSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHeroCharacterBase> GetHeroClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetClassSkeletonMaterial(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetClassSkeletalMesh(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClassSecondaryColor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClassPrimaryColor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetClassNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetClassIconFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetClassDisplayNameFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetClassDescriptionFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetCampaignUnlockTagsFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuit GetBotSuitDataFor(UBotStatus* BotStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerSuitVisualDefinition GetBotPowerSuitVisualFor(const UBotStatus* BotStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterData GetBotDataFor(UBotStatus* BotStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeValue> GetBotAttributesFor(UBotStatus* BotStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAvatarFor(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineClassData*> GetAvailableSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeValue> GetAttributesForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeValue> GetAttributesForClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeValue> GetAttributesFor(FName MarineClassName) const;
    
};

