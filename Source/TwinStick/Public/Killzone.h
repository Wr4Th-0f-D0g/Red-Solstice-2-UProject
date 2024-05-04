#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EKillzoneMode.h"
#include "Killzone.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AKillzone : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillzoneMode KillMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OverlapComponents;
    
public:
    AKillzone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetKillMode(EKillzoneMode aMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKillzoneMode GetKillMode();
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
private:
    UFUNCTION(BlueprintCallable)
    void ActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

