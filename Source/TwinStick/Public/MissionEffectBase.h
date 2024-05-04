#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionEffectBase.generated.h"

class ARegion;
class AStrategyMission;

UCLASS(Blueprintable)
class TWINSTICK_API UMissionEffectBase : public UObject {
    GENERATED_BODY()
public:
    UMissionEffectBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRandomRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRandomAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMission* GetMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDisplayText(float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARegion*> GetAdjacentRegions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(float Value);
    
};

