#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StormActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AStormActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StormRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Intensity, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    AStormActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_Intensity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IntensityChanged(float NewIntensity);
    
};

