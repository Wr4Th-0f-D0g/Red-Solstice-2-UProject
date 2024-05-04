#pragma once
#include "CoreMinimal.h"
#include "GeneratedWaveInfo.h"
#include "SpawnSettingsBase.h"
#include "SpawnSystemWave.h"
#include "SpawnSettings_GeneratedSpawns.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USpawnSettings_GeneratedSpawns : public USpawnSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSystemWave> SpawnWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSpawnSystemWave ActiveConstSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedWaveInfo SpawnData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSystemWave> PreGeneratedWaves;
    
public:
    USpawnSettings_GeneratedSpawns();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

