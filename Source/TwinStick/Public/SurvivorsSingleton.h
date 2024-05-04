#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CharacterData.h"
#include "EAttribute.h"
#include "EDifficulty.h"
#include "ESolsticeHeroClass.h"
#include "ESuitSection.h"
#include "ESuitTier.h"
#include "KeyIconStruct.h"
#include "PlayerRankData.h"
#include "SolsticeAttributeData.h"
#include "SolsticeAttributeModifier.h"
#include "Templates/SubclassOf.h"
#include "SurvivorsSingleton.generated.h"

class AInventoryPickup;
class AMinimapActorBase;
class UAntiCheatData;
class UBotManager;
class UCameraShakeBase;
class UCampaign;
class UCanvasRenderTarget2D;
class UCharacterDataAsset;
class UChatWidgetBase;
class UCorsairDataAsset;
class UDataTable;
class UFMODEvent;
class UGameplayTextMappingDefinitions;
class UGlobalDefinitions;
class UHealthBarWidgetBase;
class UMaterialInterface;
class UMedalsDataAsset;
class UNavigationQueryFilter;
class UPlaceableItemData;
class UPlayerDataAsset;
class UPlayerTasksDataAsset;
class UPrefabDataAsset;
class USolsticePrefabData;
class USolsticeVehicleDataAsset;
class UStrategyMapDefinitions;
class UTexture2D;
class UUserWidget;
class UWaveGenerationDataAsset;
class UWeaponDataAsset;

UCLASS(Blueprintable)
class TWINSTICK_API USurvivorsSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ExplosionCameraShakeTypeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GenericBuffTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterSetupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterSetupTableConsoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyMarineSetupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FollowerSetupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterAggroTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BestiaryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* WaveAdvanceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterGroupTagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveGenerationDataAsset* WaveGenerationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ComponentModuleDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControlOptionsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InventoryPickupCheatTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BotSkillDefinitionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeHeroClass, FName> MarineClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESuitSection, UTexture2D*> SuitSectionIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabDataAsset* PrefabDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyIconStruct> KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHealthBarWidgetBase> HealthBarBasicWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHealthBarWidgetBase> HealthBarArmorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocalizationSimpleTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ProjectileGoodArcColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ProjectileBadArcColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> MonsterDoorTargetCheckFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, float> BotExplosiveFFMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InteractableInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChatWidgetBase> ChatWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> VehicleInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvasRenderTarget2D* FOWRenderTaget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FOWWhiteTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LeaderboardDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTextMappingDefinitions* GameplayTextMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDataAsset* PlayerStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalDefinitions* GlobalDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* HeroData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStrategyMapDefinitions* StrategyMapDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticePrefabData* PrefabDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCorsairDataAsset* CorsairDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaceableItemData* PlaceableItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerTasksDataAsset* PlayerTasksData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponDataAsset* WeaponDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMedalsDataAsset* MedalsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeVehicleDataAsset* VehicleDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuffDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkirmishInventoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> CampaignObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBotManager> BotManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerRanksTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponFiringModeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterGroupsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogSpeakerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuitModulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyMissionGenerationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyCombatMissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AchievementTableSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AchievementTableLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnvironmentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeatherTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAntiCheatData* AntiCheatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, FName> AttributeToAspectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EAttribute> AspectToAttributeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, FName> AttributeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AspectDescriptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMinimapActorBase> PrefabMinimapActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ISMHighlightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ISMUnconvertedHighlightMaterial;
    
    USurvivorsSingleton();

    UFUNCTION(BlueprintCallable)
    void ModifyBestiaryDT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetSuitSectionIcon(ESuitSection SuitSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStrategyMapDefinitions* GetStrategyMapDefinitions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USolsticePrefabData* GetPrefabData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerTasksDataAsset* GetPlayerTaskData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerDataAsset* GetPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlaceableItemData* GetPlaceableItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetMonsterDetailsTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCharacterDataAsset* GetHeroData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerRankData GetDataForRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetClassName(ESolsticeHeroClass HeroClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterData GetCharacterData(ESolsticeHeroClass MarineClass, ESuitTier SuitVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<EAttribute, FSolsticeAttributeData> GetCharacterAttributes(ESolsticeHeroClass MarineClass, ESuitTier SuitVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSolsticeAttributeModifier> GetAttributeModifiersForRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSoftClassPtr<AInventoryPickup>, FString> GetAllCheatPickups() const;
    
};

