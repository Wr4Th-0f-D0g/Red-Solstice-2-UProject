#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SolsticeStormPreset.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSolsticeStormPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpawnRate;
    
    TWINSTICK_API FSolsticeStormPreset();
};

