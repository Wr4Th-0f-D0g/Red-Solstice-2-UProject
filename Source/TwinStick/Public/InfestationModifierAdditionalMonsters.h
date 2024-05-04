#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInfestationSpawnType.h"
#include "InfestationModifierAdditionalMonsters.generated.h"

USTRUCT(BlueprintType)
struct FInfestationModifierAdditionalMonsters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Monsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountIsRandomPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfestationSpawnType SpawnType;
    
    TWINSTICK_API FInfestationModifierAdditionalMonsters();
};

