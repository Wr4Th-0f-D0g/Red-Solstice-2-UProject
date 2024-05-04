#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MapSystemWidgetBase.h"
#include "MapSystem_MapWidgetBase.generated.h"

class ACharacter;
class UMapSystem_MapElementBase;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystem_MapWidgetBase : public UMapSystemWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D InitialAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D InitialCanvasSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D InitialCanvasPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCanvasInitialParametersSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveCurrentZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMousePosition;
    
    UMapSystem_MapWidgetBase();

    UFUNCTION(BlueprintCallable)
    void ZoomInOut(float ZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void ZoomAtCanvasPosition(float ZoomValue, FVector2D CanvasPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateElements(bool bSizeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRenderTargets();
    
    UFUNCTION(BlueprintCallable)
    void SetElementPosition(ACharacter* PlayerCharacter, const FVector& Location, float RotationYaw, UMapSystem_MapElementBase* ElementWidget, bool bSizeOffset);
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultZoom();
    
    UFUNCTION(BlueprintCallable)
    void PanRight(float RightPanAxis);
    
    UFUNCTION(BlueprintCallable)
    void PanForward(float ForwardPanAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapInitialized(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    FVector GetWorldLocationFromMousePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScreenLocationFromWorld(FVector WorldLoc) const;
    
};

