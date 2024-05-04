#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "StrategyInfestationDecal.generated.h"

class ARegion;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyInfestationDecal : public ADecalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> HomeRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> NeighboringRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    AStrategyInfestationDecal(const FObjectInitializer& ObjectInitializer);

};

