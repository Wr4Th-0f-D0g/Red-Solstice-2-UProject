#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "TraceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UTraceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTraceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TraceWeaponAndCameraHits(FVector WorldOrigin, FVector WorldDirection, FVector& CameraTracePosition, FVector& WeaponTracePosition, FVector& AdjustedCameraTracePosition, FVector& AdjustedWeaponTracePosition, bool& bHasTargetUnderMouse, UPARAM(Ref) TArray<FHitResult>& WeaponHits);
    
    UFUNCTION(BlueprintCallable)
    void CalculateTracePositions(UPARAM(Ref) FVector& CameraTracePosition, UPARAM(Ref) FVector& WeaponTracePosition, UPARAM(Ref) FVector& AdjustedCameraTracePosition, UPARAM(Ref) FVector& AdjustedWeaponTracePosition, UPARAM(Ref) bool& bHasTargetUnderMouse, TArray<FHitResult> WeaponHits);
    
};

