#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBossType.h"
#include "EEnemyThreatLevel.h"
#include "EMonsterSizeClass.h"
#include "EnemySearchParams.h"
#include "EnemyThreatSearch.h"
#include "MonsterGroupTagTable.h"
#include "MonsterSettings.h"
#include "Templates/SubclassOf.h"
#include "SolsticeAILibrary.generated.h"

class AAIController;
class AActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class IGenericTeamAgentInterface;
class UGenericTeamAgentInterface;
class UAbilityBase;
class UDataTable;
class UObject;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeAILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeAILibrary();

    UFUNCTION(BlueprintCallable)
    static void SortArrayByThreat(bool bAscending, UPARAM(Ref) TArray<AActor*>& InOutMonsterArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileOrNeutralInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileOrNeutralInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileOrNeutral(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostile(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityBase* GetWeightedAbility(bool& bSuccess, TMap<UAbilityBase*, float> WeightedMap, bool bCheckActivation, UAbilityBase* LastAbility);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetThreatValue(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static EEnemyThreatLevel GetThreatLevel(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumberOfMonsters(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumberOfEnemiesInRange(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetMonsterTag(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static EMonsterSizeClass GetMonsterSize(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static float GetMonsterKillXP(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static FMonsterGroupTagTable GetMonsterGroupRowForTag(UDataTable* GroupRowTagTable, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static FText GetMonsterDisplayName(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AMonsterCharacterBase> GetMonsterClass(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetKilledTag(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetEnemiesInRangeByThreatLevel(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams, FEnemyThreatSearch ThreatSearch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASolsticeCharacterBase*> GetEnemiesInRange(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetCapturedTag(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetCampaignRequirementTags(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static EBossType GetBossType(const FMonsterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowardsInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowardsInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowards(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckSkillRangeFollower(AAIController* InController, USkill* InSkill, const FVector& DestLoc);
    
};

