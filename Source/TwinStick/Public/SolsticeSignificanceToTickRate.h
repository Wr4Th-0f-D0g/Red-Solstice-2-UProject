#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "SolsticeSignificanceToTickRate.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSignificanceToTickRate {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FPerPlatformFloat> MovementComponentTickRates;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FPerPlatformFloat> ActorTickRates;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FPerPlatformFloat> ControllerTickRates;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FPerPlatformFloat> SkeletalMeshTickRates;
    
    TWINSTICK_API FSolsticeSignificanceToTickRate();
};

