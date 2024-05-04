#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESolsticeSignificanceType.h"
#include "SolsticeCharacterSignificanceSettings.h"
#include "SolsticeGameplayActorSignificanceSettings.h"
#include "SolsticeSignificanceToTickRate.h"
#include "Templates/SubclassOf.h"
#include "SolsticeGameData.generated.h"

class AActor;
class AVehicleWeaponBase;

UCLASS(Blueprintable, Const)
class TWINSTICK_API USolsticeGameData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSolsticeCharacterSignificanceSettings> CharacterSignificanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSolsticeGameplayActorSignificanceSettings> GameplayActorSignificanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeSignificanceType, FSolsticeSignificanceToTickRate> CharacterSignificanceToTickRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FollowerEQSTestingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVehicleWeaponBase> VehicleWeaponDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeGameplayActorSignificanceSettings ParticleSystemSignificance;
    
    USolsticeGameData();

};

