#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "BiomassDamageData.h"
#include "BiomassDamageFastArraySerializer.h"
#include "BiomassDamagedDelegate.h"
#include "BiomassExistanceChangedDelegate.h"
#include "BiomassRTUpdatedDelegate.h"
#include "Damage.h"
#include "EBiomassForbiddenZoneType.h"
#include "EDifficulty.h"
#include "PlayerBiomassStateChangedDelegate.h"
#include "PlayerStatsPair.h"
#include "Templates/SubclassOf.h"
#include "TextureGeometry.h"
#include "BiomassManager.generated.h"

class ABiomassCenterActor;
class APawn;
class ASolsticeCharacterBase;
class UCanvas;
class UCurveFloat;
class ULocationManager;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UTexture2DDynamic;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class TWINSTICK_API ABiomassManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExterminationCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateCycleTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceUpdateDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTextureTimeout;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorkHalted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumMonstersToSpawnAtOnce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassExistanceChanged BiomassAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassExistanceChanged BiomassRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABiomassCenterActor*> RegisteredBiomassActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABiomassCenterActor> CenterActorToInitSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMonsterSpawnsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficulty, float> DivisionTokenUpdateTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABiomassCenterActor*> ActorsHoldingDivisionTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAvailableTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlimitedTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> InitialCenterSpawnNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BiomassStartMonth;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BiomassRenderTaget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StampMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassRTUpdated BiomassRTUpdatedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BiomassFadeoutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BiomassDamageDefaultFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* BiomassTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvas* RTCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RTSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawToRenderTargetContext RTContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> BiomassTextureData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderTargetLerpAlpha;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdjustMapSizeToMapBounds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextureGeometry TextureGeometry;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBiomassStateChanged OnPlayerBiomassStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassDamaged OnBiomassDamaged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateCharacterPresenceUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ASolsticeCharacterBase*> CharactersOnBiomassLastUpdate;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WriteDebugLog;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomassDamageData DebugDamageData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool BugFixVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBiomassDamageFastArraySerializer DamageFastArraySerializer;
    
public:
    ABiomassManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayersOnBiomass();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDivisionTokens();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartWork();
    
    UFUNCTION(BlueprintCallable)
    void ScheduleKillBiomass(ABiomassCenterActor* InActor, float InDelay, APawn* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void RemoveForbiddenBiomassSpawnLocation(int32 InId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocationsMapped(ULocationManager* InSender);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointOnBiomass(const FVector InLocation, float InBiomassCoverPercentageRequired);
    
    UFUNCTION(BlueprintCallable)
    bool IsMonsterSpawnsEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationAllowedForBiomassSpawn(FVector InLocation, float InBiomassRadius);
    
    UFUNCTION(BlueprintCallable)
    bool HasStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDamageSerializerDataChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBiomassCenterKilled(ABiomassCenterActor* InActorKilled);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActorKilled(AActor* InKilledActor, const FDamage& InDamageInfo, bool bRecentlyDied);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetTotalNumSpawnedMonsters();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABiomassCenterActor*> GetRegisteredBiomassActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayersOnBiomass(TArray<ASolsticeCharacterBase*>& OutHeroes, bool bInOnlyLiveHeroes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersOnBiomass(bool InOnlyLiveHeroes);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumCenterActorsInRadiusFromPoint(FVector InPointLocation, float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABiomassCenterActor* GetNearestCenterActor(FVector InPointLocation);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxNumMonstersToBeSpawnedAtOnce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToBiomassEdge(const FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToBiomassCenterSq(const FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToBiomassCenter(const FVector Point);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABiomassCenterActor*> GetCenterActorsWithinMaxRadiusOfPoint(FVector InPointLocation);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABiomassCenterActor*> GetCenterActorsOverlappingPoint(FVector InPointLocation);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABiomassCenterActor*> GetCenterActorsInRadiusFromPoint(FVector InPointLocation, float InRadius);
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetBiomassFadeoutCurve();
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetBiomassDamageDefaultFalloffCurve();
    
    UFUNCTION(BlueprintCallable)
    float GetBiomassCoverageValueAtPoint(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void FindMapBounds();
    
    UFUNCTION(BlueprintCallable)
    bool FindLMABiomassSpawnLocation(FTransform& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugTextureArray();
    
    UFUNCTION(BlueprintCallable)
    void DoFastSpread(int32 NumCentersToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void DebugDealBiomassDamage();
    
    UFUNCTION(BlueprintCallable)
    void DealBiomassDamageStandard(float InIntensity, float InRange, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void DealBiomassDamage(FBiomassDamageData InData);
    
    UFUNCTION(BlueprintCallable)
    bool AreAnyCenterActorsInRadiusOfPoint(FVector InPointLocation, float InRadius, ABiomassCenterActor* InIgnoredActor);
    
    UFUNCTION(BlueprintCallable)
    int32 AddForbiddenBiomassSpawnAreaSphere(FVector InLocation, float InRadius, EBiomassForbiddenZoneType InZoneType, float InTime);
    
    UFUNCTION(BlueprintCallable)
    int32 AddForbiddenBiomassSpawnAreaBox(FBox InBox, FRotator InRotation, EBiomassForbiddenZoneType InZoneType, float InTime);
    
};

