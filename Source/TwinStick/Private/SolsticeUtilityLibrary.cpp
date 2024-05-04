#include "SolsticeUtilityLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeUtilityLibrary::USolsticeUtilityLibrary() {
}

void USolsticeUtilityLibrary::UpdateNavigationForComponent(USceneComponent* SceneComponent) {
}

bool USolsticeUtilityLibrary::SweepSupplyDropLandingSiteClear(const UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, const UBoxComponent* BoxCollision, bool bDrawDebug) {
    return false;
}

FGameplayTag USolsticeUtilityLibrary::StringToGameplayTag(const FString& Str, bool bAllowWarning) {
    return FGameplayTag{};
}

void USolsticeUtilityLibrary::StopAllFMODEvents() {
}

TSoftObjectPtr<AShivaActor> USolsticeUtilityLibrary::SpawnShiva(const UObject* WorldContextObject, TSoftClassPtr<AShivaActor> ShivaActorClass, FTransform SpawnTransform, float ExplosionDelay, float ExtraDamage, APawn* Instigator) {
    return NULL;
}

TArray<FName> USolsticeUtilityLibrary::SortNameArray(TArray<FName> inArray, bool bAscending) {
    return TArray<FName>();
}

void USolsticeUtilityLibrary::SortLocationsByDistance(TArray<FVector>& InOutLocations, const FVector& Point, bool bAscending) {
}

void USolsticeUtilityLibrary::SortByDistance(TArray<AActor*>& InOutActors, const FVector& Point, bool bAscending) {
}

void USolsticeUtilityLibrary::SetCollisionEnabledOnDescendants(USceneComponent* Parent, TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled, bool bAffectSelf) {
}

void USolsticeUtilityLibrary::SetAudioSpeedEffect(UObject* TargetObject, float SpeedPercent) {
}

void USolsticeUtilityLibrary::SetActorCompNavigationAffect(UActorComponent* Comp, bool bAffectsNav) {
}

void USolsticeUtilityLibrary::SendGameMessage(const UObject* WorldContextObject, const FText& Message, const FLinearColor Color, EGameMessageType MessageType, EGameMessage GameMessage) {
}

void USolsticeUtilityLibrary::RestoreActorBackupMaterials(TArray<FComponentMaterialsBackupStruct> InMaterialBackups) {
}

void USolsticeUtilityLibrary::RestoreActorBackupMaterial(FComponentMaterialsBackupStruct InMaterialBackup) {
}

void USolsticeUtilityLibrary::ReplaceAllMaterialsInBackupStructs(TArray<FComponentMaterialsBackupStruct> InMaterialBackups, UMaterialInterface* InMaterialToReplaceWith) {
}

void USolsticeUtilityLibrary::RemoveGameplayTagFromObject(UObject* TargetObject, FGameplayTag TagToRemove) {
}

void USolsticeUtilityLibrary::RemoveActorsFromArray(TArray<AActor*>& InOutActors, bool bDead, FGameplayTagContainer Tags, EGameplayContainerMatchType TagMatchType) {
}

void USolsticeUtilityLibrary::PlayCameraShakeInRange(const UObject* WorldContextObject, FVector InLocation, float InRange, TSubclassOf<UCameraShakeBase> InCameraShake, float InScale) {
}

void USolsticeUtilityLibrary::OpenDLCSteamPage(int32 AppID) {
}

uint64 USolsticeUtilityLibrary::NetIdToUint64(const FUniqueNetIdRepl& InUniqueNetId) {
    return 0;
}

FGameplayTag USolsticeUtilityLibrary::NameToGameplayTag(FName Name, bool bAllowWarning) {
    return FGameplayTag{};
}

FInventoryPickupData USolsticeUtilityLibrary::MakePickupDataFromPickup(AInventoryPickup* InPickup) {
    return FInventoryPickupData{};
}

FInventoryPickupData USolsticeUtilityLibrary::MakePickupDataFromClass(TSubclassOf<AInventoryPickup> InItemClass) {
    return FInventoryPickupData{};
}

FGrantAndActivatePayload USolsticeUtilityLibrary::MakeGrantAndActivatePayload(const FVector& TargetLocation, UObject* OptionalPayload, UObject* OptionalPayload2, float OptionalFloat, bool bActivateFromClient) {
    return FGrantAndActivatePayload{};
}

FText USolsticeUtilityLibrary::LocalizationSimpleText(FName Row) {
    return FText::GetEmpty();
}

bool USolsticeUtilityLibrary::IsValidMedalModule(const FModuleInfo& InModuleInfo) {
    return false;
}

bool USolsticeUtilityLibrary::IsUniqueNetIdEqual(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

bool USolsticeUtilityLibrary::IsUniqueIDValid(const FUniqueNetIdRepl& InUniqueNetId) {
    return false;
}

bool USolsticeUtilityLibrary::IsTearingDown(const UObject* WorldContextObject) {
    return false;
}

bool USolsticeUtilityLibrary::IsShipping() {
    return false;
}

bool USolsticeUtilityLibrary::IsSameMappingKey(FInputActionKeyMapping InMap1, FInputActionKeyMapping InMap2) {
    return false;
}

bool USolsticeUtilityLibrary::IsPlayingCampaign(const UObject* WorldContextObject) {
    return false;
}

bool USolsticeUtilityLibrary::IsPickupDataValid(const FInventoryPickupData& InData) {
    return false;
}

bool USolsticeUtilityLibrary::IsModuleUnlocked(const UObject* WorldContextObject, const FModuleInfo& Module) {
    return false;
}

bool USolsticeUtilityLibrary::IsModuleAllowedOnSlot(const FModuleInfo& Module, ESuitSection Slot) {
    return false;
}

bool USolsticeUtilityLibrary::IsModuleAllowedForClass(const FModuleInfo& Module, ESolsticeHeroClass Class) {
    return false;
}

bool USolsticeUtilityLibrary::IsModuleAllowedForCharacterType(const FModuleInfo& Module, ECharacterType CharacterType) {
    return false;
}

bool USolsticeUtilityLibrary::IsMedalModule(const FModuleInfo& InModuleInfo) {
    return false;
}

bool USolsticeUtilityLibrary::IsLocationInCameraView(const UObject* WorldContextObject, FVector InTestedLocation, bool bAlsoCheckForFOW) {
    return false;
}

bool USolsticeUtilityLibrary::IsEditorBuild() {
    return false;
}

bool USolsticeUtilityLibrary::IsEditorAndNotPIE(const UObject* WorldContextObject) {
    return false;
}

bool USolsticeUtilityLibrary::IsConsolePlatform() {
    return false;
}

bool USolsticeUtilityLibrary::IsActorDead(AActor* InActor) {
    return false;
}

bool USolsticeUtilityLibrary::Is_PIE(const UObject* WorldContextObject) {
    return false;
}

int32 USolsticeUtilityLibrary::GetWeaponRequiredEquipSizeFromData(const FCharacterWeaponData& WeaponData) {
    return 0;
}

float USolsticeUtilityLibrary::GetWeaponInventorySizeFromData(const FCharacterWeaponData& WeaponData) {
    return 0.0f;
}

float USolsticeUtilityLibrary::GetWeaponDataTableAttribute(UDataTable* WeaponDataTable, FName WeaponName, EAttribute InAttribute, bool& bOutSuccess) {
    return 0.0f;
}

bool USolsticeUtilityLibrary::GetWallActorTag(FGameplayTag& OutTag, AActor* InActor) {
    return false;
}

FString USolsticeUtilityLibrary::GetTagEndString(FName TagName) {
    return TEXT("");
}

TArray<ARTS_PlayerState*> USolsticeUtilityLibrary::GetSquadRTSPlayerStates(const UObject* ContextObject) {
    return TArray<ARTS_PlayerState*>();
}

EDamageGroup USolsticeUtilityLibrary::GetSolsticeDamageGroupFromDamageObjectClass(TSubclassOf<UDamageType> InDamageObjectClass) {
    return EDamageGroup::EDT_None;
}

float USolsticeUtilityLibrary::GetServerWorldTimeDelta(const UObject* WorldContextObject) {
    return 0.0f;
}

float USolsticeUtilityLibrary::GetServerWorldTime(const UObject* WorldContextObject) {
    return 0.0f;
}

FPlayerRankData USolsticeUtilityLibrary::GetRankDataFor(int32 Rank) {
    return FPlayerRankData{};
}

int32 USolsticeUtilityLibrary::GetPlayerStateDisplayRank(ASolsticePlayerState* PlayerState) {
    return 0;
}

FGameplayTag USolsticeUtilityLibrary::GetMissionTagFrom(const FCombatLayerMissionSpawnParameters& MissionSpawnParameters) {
    return FGameplayTag{};
}

UTexture2D* USolsticeUtilityLibrary::GetMarineClassIcon(ESolsticeHeroClass HeroClass) {
    return NULL;
}

int32 USolsticeUtilityLibrary::GetLocalPlayerRank(const UObject* WorldContextObject) {
    return 0;
}

FGameplayTag USolsticeUtilityLibrary::GetGameplayTagByName(FName TagName) {
    return FGameplayTag{};
}

FName USolsticeUtilityLibrary::GetGameDifficultyName(const UObject* WorldContextObject) {
    return NAME_None;
}

EDifficulty USolsticeUtilityLibrary::GetGameDifficulty(const UObject* WorldContextObject) {
    return EDifficulty::None;
}

FCombatLayerMissionSpawnParameters USolsticeUtilityLibrary::GetEmptyMissionSpawnParameters() {
    return FCombatLayerMissionSpawnParameters{};
}

FText USolsticeUtilityLibrary::GetDifficultyDisplayTextFor(EDifficulty GameDifficulty) {
    return FText::GetEmpty();
}

FText USolsticeUtilityLibrary::GetDifficultyDisplayText(const UObject* WorldContextObject) {
    return FText::GetEmpty();
}

float USolsticeUtilityLibrary::GetDataTableAspectValueForLevel(FDataTableRowHandle AbilityRow, FName InAspectName, int32 InLevel, bool& bOutSuccess) {
    return 0.0f;
}

EDamageGroup USolsticeUtilityLibrary::GetDamageTypeFromOldEnum(EDamageType DamageType) {
    return EDamageGroup::EDT_None;
}

TSubclassOf<USolsticeDamageTypeObjectBase> USolsticeUtilityLibrary::GetDamageObjectClassFromSolsticeDamageGroup(EDamageGroup InDamageGroup) {
    return NULL;
}

APawn* USolsticeUtilityLibrary::GetDamageInstigator(const FDamage& DamageInfo) {
    return NULL;
}

FName USolsticeUtilityLibrary::GetCurrentCommonUIPlatformName() {
    return NAME_None;
}

TArray<FComponentMaterialsBackupStruct> USolsticeUtilityLibrary::GetBackupActorMaterials(AActor* InActor, TArray<FName> InTagsToIgnore) {
    return TArray<FComponentMaterialsBackupStruct>();
}

void USolsticeUtilityLibrary::GetArmoryAttributeValue(EAttribute Attribute, AStrategyPlayerState* PS, UAttributeComponent* AttributeComponent, FSolsticeAttributeData& OutAttributeData) {
}

FGameplayTagContainer USolsticeUtilityLibrary::GetAllExplicitTagsMatching(const FGameplayTag& InTag) {
    return FGameplayTagContainer{};
}

TArray<AActor*> USolsticeUtilityLibrary::GetActorsSortedByDistance(const TArray<AActor*>& InActors, const FVector& Point, bool bAscending) {
    return TArray<AActor*>();
}

bool USolsticeUtilityLibrary::GetAbilityQueryRow(const UDataTable* DataTable, FName Row, bool& bIsSkillDef, FAbilityDefinition& OutAbilityDef, FSkillDefinition& OutSkillDef) {
    return false;
}

UAbilityBase* USolsticeUtilityLibrary::GetAbilityCDO(TSubclassOf<UAbilityBase> AbilityClass) {
    return NULL;
}

USceneComponent* USolsticeUtilityLibrary::FindFirstParentOfClass(const USceneComponent* SearchRoot, TSubclassOf<USceneComponent> ComponentClass) {
    return NULL;
}

AMeshSystemCenterBase* USolsticeUtilityLibrary::FindClosestVehicleSpawnCenter(const UObject* WorldContextObject, FVector InLocation, float InMinDistFromAnyMarines, float InMinDistFromVehicles) {
    return NULL;
}

void USolsticeUtilityLibrary::FilterAndSortByHealth(TArray<ASolsticeCharacterBase*>& InOutCharacters, float HealthPercent) {
}

void USolsticeUtilityLibrary::FilterActorsByClassesSoft(TArray<AActor*>& InOutActors, TArray<TSoftClassPtr<AActor>> InClasses) {
}

void USolsticeUtilityLibrary::FilterActorsByClasses(TArray<AActor*>& InOutActors, TArray<TSubclassOf<AActor>> InClasses) {
}

bool USolsticeUtilityLibrary::CanInitiateBanOnPlayer(APlayerState* PlayerState) {
    return false;
}

bool USolsticeUtilityLibrary::CanEquipWeaponOfClass(const UObject* WorldContext, TSubclassOf<ASolsticeWeaponBase> WeaponClass) {
    return false;
}

TArray<float> USolsticeUtilityLibrary::CalculateBlurKernel(int32 NumberOfElements, float CurveParameter) {
    return TArray<float>();
}

bool USolsticeUtilityLibrary::AreMissionSpawnParametersValid(const FCombatLayerMissionSpawnParameters& MissionSpawnParameters) {
    return false;
}

bool USolsticeUtilityLibrary::AdjustActorSpawnTransform(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, FTransform& InOutTransform, bool bProject) {
    return false;
}

FVector USolsticeUtilityLibrary::AdjustActorSpawnLocation_Copy(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, const FVector& InLocation, bool& bSuccess, bool bProject, FVector VerticalAdjustment) {
    return FVector{};
}

bool USolsticeUtilityLibrary::AdjustActorSpawnLocation(const UObject* WorldContextObject, TSubclassOf<AActor> ActorType, FVector& InOutLocation, bool bProject, FVector VerticalAdjustment, TSubclassOf<UNavigationQueryFilter> NavFilterClass) {
    return false;
}

void USolsticeUtilityLibrary::AddGameplayTagToObject(UObject* TargetObject, FGameplayTag TagToAdd) {
}

UActorComponent* USolsticeUtilityLibrary::AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}


