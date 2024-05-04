#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AreaMarkerActorParameters.generated.h"

class AActor;
class AAoE_MarkerBase;
class UParticleSystem;

USTRUCT(BlueprintType)
struct TWINSTICK_API FAreaMarkerActorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AreaEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAoE_MarkerBase> AreaMarkerActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IgnoreClassFilter;
    
    FAreaMarkerActorParameters();
};

