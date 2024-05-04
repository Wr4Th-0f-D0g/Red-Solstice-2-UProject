#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveResearch.h"
#include "CampaignMissionLocation.h"
#include "ECampaignMode.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "EDropshipStatus.h"
#include "EHQStatus.h"
#include "EStormSeverity.h"
#include "EStrategyMissionStatus.h"
#include "MarsTime.h"
#include "MissionEffect.h"
#include "MissionEffectContainer.h"
#include "MissionEffectData.h"
#include "RegionalStormTracker.h"
#include "SavedModule.h"
#include "SolsticeCampaignRequirement.h"
#include "SolsticeSaveGameInfo.h"
#include "StrategyMissionTimer.h"
#include "StrategyViewConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SolsticeStrategyLibrary.generated.h"

class AActor;
class AExecutorHQ;
class AHASROC;
class ALoadoutGarageBase;
class ARegion;
class ASOLAR;
class AStrategyDropship;
class AStrategyMapActor;
class AStrategyMapManager;
class AStrategyMission;
class AStrategyPlayerState;
class ASuperWeaponBase;
class AWeaponWorkbenchBase;
class UBotManager;
class UBotStatus;
class UCallToActionManager;
class UCampaign;
class UCampaignStateComponent;
class USolsticeBuffBase;
class UStrategyCampaignData;
class UStrategyEngineeringManager;
class UStrategyInfestationManager;
class UStrategyIntelManager;
class UStrategyMapDefinitions;
class UStrategyMissionManager;
class UStrategyResearchManager;
class UStrategyResourceManager;
class UStrategyStormManager;
class UStrategyViewManager;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeStrategyLibrary : public UObject {
    GENERATED_BODY()
public:
    USolsticeStrategyLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WorldRotatorToPlanetaryYaw(const FRotator& WorldRotation, const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldMapTabAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool WorkbenchShouldBeEnabled(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool TasksTabAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMarsTime Substract_MarsTimeMarsTime(FMarsTime A, FMarsTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool StrategyTimedFlagIsActive(const UObject* WorldContextObject, FGameplayTag QueryFlagTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool StratagemIsEquippedOnSomeone(const UObject* WorldContext, FGameplayTag StratagemTag, AStrategyPlayerState*& OutEquippedPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SoldiersTabAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldUseCoopCampaignEquipment(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator PlanetaryYawToWorldRotator(float PlanetaryYaw, const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool MissionSetupTabAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MarsTimeIsValid(FMarsTime InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMissionEffect MakeMissionEffectFromData(const FMissionEffectData& MissionEffectData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMissionEffect MakeMissionEffect(FGameplayTag& EffectTag, TSubclassOf<USolsticeBuffBase> BuffClass, const FGameplayTagContainer& Items, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSinglePlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInDistantFuture(FMarsTime InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWeaponWorkbenchBase* GetWorkbenchActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetViewTag(const FStrategyViewConfiguration& InView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyViewManager* GetViewManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetUnlockedInventorySlotCount(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTravelModeTimeMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimeDisplayText(const FMarsTime& InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStrategyViewTarget(const FStrategyViewConfiguration& InView, AActor*& ViewTarget, float& BlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AStrategyMission* GetStrategyMission(const FStrategyMissionTimer& MissionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStrategyMapDefinitions* GetStrategyMapDefinitions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStormSeverity GetStormSeverity(FRegionalStormTracker StormTracker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyStormManager* GetStormManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASOLAR* GetSolar(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSlowModeTimeMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetSelectedCampaignTag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetScanModeTimeMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyResourceManager* GetResourceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMarsTime GetResearchTimeRemaining(const FActiveResearch& InResearch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetResearchProgress(const FActiveResearch& InResearch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyResearchManager* GetResearchManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARegion* GetRegionFromLocation(const UObject* WorldContextObject, const FCampaignMissionLocation& InLocation, bool bTryAvoidHQRegion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARegion* GetRegionByName(const UObject* WorldContextObject, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPlanetaryUpAtPoint(const FVector& Point, const FVector& PlanetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPlanetaryNorthAtPoint(const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPlanetaryEastAtPoint(const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyMissionManager* GetMissionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMarsTimeSeconds(const FMarsTime& InTime);
    
    UFUNCTION(BlueprintCallable)
    static void GetMarsTimeDaysHours(const FMarsTime& InTime, int32& OutDays, int32& OutHours);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyMapManager* GetMapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyPlayerState* GetLocalPlayerStateViewContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetKilometersPerUU(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyIntelManager* GetIntelManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetInsurgentResistanceProgress(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyInfestationManager* GetInfestationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EHQStatus GetHQ_Status(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARegion* GetHQ_Region(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AExecutorHQ* GetHQ(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHASROC* GetHasroc(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ALoadoutGarageBase* GetGarageActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ECampaignMode GetGameCampaignMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyEngineeringManager* GetEngineeringManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyMapActor* GetDropshipTarget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EDropshipStatus GetDropshipStatus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategyDropship* GetDropship(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDissipationChance(FRegionalStormTracker StormTracker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCurrentTimeMultiplier(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UBotStatus* GetCurrentlySelectedBot(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyCampaignData* GetCurrentCampaignData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStrategyMissionStatus GetCompletionStatus(const FStrategyMissionTimer& MissionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCampaignTimeDisplayText(const FMarsTime& InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASuperWeaponBase* GetCampaignSuperweapon(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCampaignStateComponent* GetCampaignState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FMarsTime GetCampaignStartTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EDifficulty GetCampaignDifficulty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCampaignDateDisplayText(const FMarsTime& InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStrategyCampaignData* GetCampaignDataByTag(const UObject* WorldContextObject, FGameplayTag CampaignSelectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FMarsTime GetCampaignCurrentTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCallToActionManager* GetCallToActionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBotManager* GetBotManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<EDifficulty> GetAvailableGameDifficulties(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EDifficulty> GetAllGameDifficulties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCampaign* GetActiveCampaign(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindWeaponModDescriptionRowNameFromAppliedBuffName(const UObject* WorldContext, FName InAppliedBuffName, FName& FoundModName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equals_SolsticeSaveSolsticeSave(const FSolsticeSaveGameInfo& A, const FSolsticeSaveGameInfo& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag CorporationToCampaignSelectionTag(ECorporation InCorporation);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, int32> CondenseModuleList(const TArray<FSavedModule>& InModules);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanUseInsurgentResistanceProgress(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanUseGarage(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanUseBlackOps(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanModifyAnyWeapons(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CampaignMeetsCampaignRequirements(const UObject* WorldContext, FSolsticeCampaignRequirement Requirement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CampaignHasTag(const UObject* WorldContextObject, FGameplayTag QueryTag, bool bExactTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CampaignHasAllTags(const UObject* WorldContextObject, FGameplayTagContainer QueryContainer, bool bExactTag);
    
    UFUNCTION(BlueprintCallable)
    static FMissionEffectContainer AggregateMissionEffectContainer(const FMissionEffectContainer& InMissionEffectContainer, bool IgnoreIndividualMissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMarsTime Add_MarsTimeSeconds(FMarsTime A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMarsTime Add_MarsTimeMarsTime(FMarsTime A, FMarsTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMarsTime Add_MarsTimeHours(FMarsTime A, int32 B);
    
};

