#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityDefinition.h"
#include "CharacterWeaponData.h"
#include "CombatLayerMissionSpawnParameters.h"
#include "ComponentMaterialsBackupStruct.h"
#include "Damage.h"
#include "EAttribute.h"
#include "ECharacterType.h"
#include "EDamageGroup.h"
#include "EDamageType.h"
#include "EDifficulty.h"
#include "EGameMessage.h"
#include "EGameMessageType.h"
#include "ESolsticeHeroClass.h"
#include "ESuitSection.h"
#include "GrantAndActivatePayload.h"
#include "InventoryPickupData.h"
#include "ModuleInfo.h"
#include "PlayerRankData.h"
#include "SkillDefinition.h"
#include "SolsticeAttributeData.h"
#include "Templates/SubclassOf.h"
#include "SolsticeUtilityLibrary.generated.h"

class AActor;
class AInventoryPickup;
class AMeshSystemCenterBase;
class APawn;
class APlayerState;
class ARTS_PlayerState;
class AShivaActor;
class ASolsticeCharacterBase;
class ASolsticePlayerState;
class ASolsticeWeaponBase;
class AStrategyPlayerState;
class UAbilityBase;
class UActorComponent;
class UAttributeComponent;
class UBoxComponent;
class UCameraShakeBase;
class UDamageType;
class UDataTable;
class UMaterialInterface;
class UNavigationQueryFilter;
class UObject;
class USceneComponent;
class USolsticeDamageTypeObjectBase;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateNavigationForComponent(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SweepSupplyDropLandingSiteClear(const UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, const UBoxComponent* BoxCollision, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag StringToGameplayTag(const FString& Str, bool bAllowWarning);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllFMODEvents();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSoftObjectPtr<AShivaActor> SpawnShiva(const UObject* WorldContextObject, TSoftClassPtr<AShivaActor> ShivaActorClass, FTransform SpawnTransform, float ExplosionDelay, float ExtraDamage, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> SortNameArray(TArray<FName> inArray, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortLocationsByDistance(UPARAM(Ref) TArray<FVector>& InOutLocations, const FVector& Point, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortByDistance(UPARAM(Ref) TArray<AActor*>& InOutActors, const FVector& Point, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionEnabledOnDescendants(USceneComponent* Parent, TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled, bool bAffectSelf);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioSpeedEffect(UObject* TargetObject, float SpeedPercent);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCompNavigationAffect(UActorComponent* Comp, bool bAffectsNav);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendGameMessage(const UObject* WorldContextObject, const FText& Message, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreActorBackupMaterials(TArray<FComponentMaterialsBackupStruct> InMaterialBackups);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreActorBackupMaterial(FComponentMaterialsBackupStruct InMaterialBackup);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceAllMaterialsInBackupStructs(TArray<FComponentMaterialsBackupStruct> InMaterialBackups, UMaterialInterface* InMaterialToReplaceWith);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayTagFromObject(UObject* TargetObject, FGameplayTag TagToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActorsFromArray(UPARAM(Ref) TArray<AActor*>& InOutActors, bool bDead, FGameplayTagContainer Tags, EGameplayContainerMatchType TagMatchType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayCameraShakeInRange(const UObject* WorldContextObject, FVector InLocation, float InRange, TSubclassOf<UCameraShakeBase> InCameraShake, float InScale);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDLCSteamPage(int32 AppID);
    
    UFUNCTION()
    static uint64 NetIdToUint64(const FUniqueNetIdRepl& InUniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag NameToGameplayTag(FName Name, bool bAllowWarning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInventoryPickupData MakePickupDataFromPickup(AInventoryPickup* InPickup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInventoryPickupData MakePickupDataFromClass(TSubclassOf<AInventoryPickup> InItemClass);
    
    UFUNCTION(BlueprintCallable)
    static FGrantAndActivatePayload MakeGrantAndActivatePayload(const FVector& TargetLocation, UObject* OptionalPayload, UObject* OptionalPayload2, float OptionalFloat, bool bActivateFromClient);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText LocalizationSimpleText(FName Row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidMedalModule(const FModuleInfo& InModuleInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUniqueNetIdEqual(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUniqueIDValid(const FUniqueNetIdRepl& InUniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTearingDown(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameMappingKey(FInputActionKeyMapping InMap1, FInputActionKeyMapping InMap2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingCampaign(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPickupDataValid(const FInventoryPickupData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsModuleUnlocked(const UObject* WorldContextObject, const FModuleInfo& Module);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModuleAllowedOnSlot(const FModuleInfo& Module, ESuitSection Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModuleAllowedForClass(const FModuleInfo& Module, ESolsticeHeroClass Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModuleAllowedForCharacterType(const FModuleInfo& Module, ECharacterType CharacterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMedalModule(const FModuleInfo& InModuleInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationInCameraView(const UObject* WorldContextObject, FVector InTestedLocation, bool bAlsoCheckForFOW);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditorBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEditorAndNotPIE(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsolePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorDead(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Is_PIE(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeaponRequiredEquipSizeFromData(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponInventorySizeFromData(const FCharacterWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponDataTableAttribute(UDataTable* WeaponDataTable, FName WeaponName, EAttribute InAttribute, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWallActorTag(FGameplayTag& OutTag, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTagEndString(FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ARTS_PlayerState*> GetSquadRTSPlayerStates(const UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDamageGroup GetSolsticeDamageGroupFromDamageObjectClass(TSubclassOf<UDamageType> InDamageObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTimeDelta(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerRankData GetRankDataFor(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerStateDisplayRank(ASolsticePlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetMissionTagFrom(const FCombatLayerMissionSpawnParameters& MissionSpawnParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetMarineClassIcon(ESolsticeHeroClass HeroClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLocalPlayerRank(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetGameplayTagByName(FName TagName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetGameDifficultyName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EDifficulty GetGameDifficulty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCombatLayerMissionSpawnParameters GetEmptyMissionSpawnParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDifficultyDisplayTextFor(EDifficulty GameDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetDifficultyDisplayText(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDataTableAspectValueForLevel(FDataTableRowHandle AbilityRow, FName InAspectName, int32 InLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static EDamageGroup GetDamageTypeFromOldEnum(EDamageType DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USolsticeDamageTypeObjectBase> GetDamageObjectClassFromSolsticeDamageGroup(EDamageGroup InDamageGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetDamageInstigator(const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCurrentCommonUIPlatformName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FComponentMaterialsBackupStruct> GetBackupActorMaterials(AActor* InActor, TArray<FName> InTagsToIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void GetArmoryAttributeValue(EAttribute Attribute, AStrategyPlayerState* PS, UAttributeComponent* AttributeComponent, FSolsticeAttributeData& OutAttributeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetAllExplicitTagsMatching(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetActorsSortedByDistance(const TArray<AActor*>& InActors, const FVector& Point, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAbilityQueryRow(const UDataTable* DataTable, FName Row, bool& bIsSkillDef, FAbilityDefinition& OutAbilityDef, FSkillDefinition& OutSkillDef);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityBase* GetAbilityCDO(TSubclassOf<UAbilityBase> AbilityClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* FindFirstParentOfClass(const USceneComponent* SearchRoot, TSubclassOf<USceneComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMeshSystemCenterBase* FindClosestVehicleSpawnCenter(const UObject* WorldContextObject, FVector InLocation, float InMinDistFromAnyMarines, float InMinDistFromVehicles);
    
    UFUNCTION(BlueprintCallable)
    static void FilterAndSortByHealth(UPARAM(Ref) TArray<ASolsticeCharacterBase*>& InOutCharacters, float HealthPercent);
    
    UFUNCTION(BlueprintCallable)
    static void FilterActorsByClassesSoft(UPARAM(Ref) TArray<AActor*>& InOutActors, TArray<TSoftClassPtr<AActor>> InClasses);
    
    UFUNCTION(BlueprintCallable)
    static void FilterActorsByClasses(UPARAM(Ref) TArray<AActor*>& InOutActors, TArray<TSubclassOf<AActor>> InClasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanInitiateBanOnPlayer(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanEquipWeaponOfClass(const UObject* WorldContext, TSubclassOf<ASolsticeWeaponBase> WeaponClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> CalculateBlurKernel(int32 NumberOfElements, float CurveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreMissionSpawnParametersValid(const FCombatLayerMissionSpawnParameters& MissionSpawnParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AdjustActorSpawnTransform(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, UPARAM(Ref) FTransform& InOutTransform, bool bProject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector AdjustActorSpawnLocation_Copy(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, const FVector& InLocation, bool& bSuccess, bool bProject, FVector VerticalAdjustment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AdjustActorSpawnLocation(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, UPARAM(Ref) FVector& InOutLocation, bool bProject, FVector VerticalAdjustment, TSubclassOf<UNavigationQueryFilter> NavFilterClass);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayTagToObject(UObject* TargetObject, FGameplayTag TagToAdd);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
};

