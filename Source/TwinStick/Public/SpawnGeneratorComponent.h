#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EDifficulty.h"
#include "EMonsterType.h"
#include "GeneratedSpawnInfo.h"
#include "GeneratedSpawnInfoUpdatedDelegate.h"
#include "GeneratedWave.h"
#include "GeneratedWaveInfo.h"
#include "GeneratedWaveMonsterItem.h"
#include "GeneratedWaveTypeValue.h"
#include "SpawnGeneratorParams.h"
#include "SpawnSystemWave.h"
#include "SpawnSystemWaveInfo.h"
#include "SpawnGeneratorComponent.generated.h"

class UDataTable;
class UObject;
class UWaveGenerationDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USpawnGeneratorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveGenerationDataAsset* WaveGenerationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GeneratedSpawnInfo, meta=(AllowPrivateAccess=true))
    FGeneratedSpawnInfo GeneratedSpawnInfo;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedSpawnInfoUpdated OnGeneratedSpawnInfoUpdated;
    
    USpawnGeneratorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void Static_GenerateFromDeploymentData(UDataTable* InDataTable, FRandomStream& RandomStream, FGeneratedWaveInfo& OutWaveInfo, TArray<FSpawnSystemWaveInfo>& OutDeploymentWaveInfo, TArray<FSpawnSystemWave>& OutGeneratedWaves);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GeneratedSpawnInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPeakWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetWavePointValues(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWavePointValue(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedWaveInfo GetWaveInfoDeploymentTest(const FGeneratedSpawnInfo& InWaveInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeneratedWaveInfo GetWaveInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWaveBarPercentage(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalWaves(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalBasePoints(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSeedUsed(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGeneratedWaveTypeValue> GetRollValuesForWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerModifierMultiplier(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMonsterType GetPeakingMonsterType(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetMonstersThatAreSpawning(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGeneratedWaveMonsterItem> GetMonstersSpawningForWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInfestationModifier(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInfestationLevel(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHighestWavePointValue(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGeneratedWave> GetGeneratedWavesArray(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedWave GetGeneratedWave(const FGeneratedWaveInfo& InGeneratedInfo, int32 WaveNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDifficulty GetDifficulty(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentDay(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGeneratedWaveTypeValue> GetBasePointsArray(const FGeneratedWaveInfo& InGeneratedInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void GenerateSpawnData(const UObject* WorldContext, const FSpawnGeneratorParams& GeneratorParams);
    
};

