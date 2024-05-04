#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "OnInteractableChangedDelegate.h"
#include "OnSelectedNextInteractableDelegate.h"
#include "OnSelectedPreviousInteractableDelegate.h"
#include "InteractionDetectionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableChanged OnInteractableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedNextInteractable OnSelectedNextInteractable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedPreviousInteractable OnSelectedPreviousInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewInteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteractionInFogOfWar;
    
    UInteractionDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* SelectPreviousInteractable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* SelectNextInteractable();
    
    UFUNCTION(BlueprintCallable)
    void RunInteractionDetection(const TArray<FHitResult>& WeaponHits, const FVector& CameraHitLocation, UPARAM(Ref) TArray<AActor*>& DetectionResults, UPARAM(Ref) TArray<AActor*>& PreviewResults, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInteractables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentInteractable() const;
    
};

