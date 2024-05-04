#pragma once
#include "CoreMinimal.h"
#include "StrategyMapActor.h"
#include "TerraformerInfo.h"
#include "Terraformer.generated.h"

class ARegion;

UCLASS(Blueprintable)
class TWINSTICK_API ATerraformer : public AStrategyMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTerraformerInfo TerraformerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegion* Region;
    
    ATerraformer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTerraformerVisualState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTerraformerNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTerraformerInfested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTerraformerDesstroyed();
    
};

