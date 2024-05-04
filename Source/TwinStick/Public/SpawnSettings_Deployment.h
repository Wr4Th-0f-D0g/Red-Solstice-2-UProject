#pragma once
#include "CoreMinimal.h"
#include "SpawnSettingsBase.h"
#include "SpawnSystemWave.h"
#include "SpawnSystemWaveInfo.h"
#include "SpawnSettings_Deployment.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USpawnSettings_Deployment : public USpawnSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DeploymentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSystemWave> CurrentActiveConstantSpawns;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSystemWaveInfo> DeploymentWaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSpawnSystemWave> PreGeneratedWaves;
    
public:
    USpawnSettings_Deployment();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

