#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "RenderTargetMinimap.h"
#include "MapSystemWidgetBase.generated.h"

class ACharacter;
class AMapSystemManager;
class UCanvasPanel;
class UMaterialInstanceDynamic;
class UTexture;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystemWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapSystemManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* CanvasBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* PlayerWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* ObserverWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ObserverPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundSizeRatioX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundSizeRatioY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCentralizePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerIconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ObserverOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCircleMask;
    
    UMapSystemWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetPlayerPositionInCanvas();
    
    UFUNCTION(BlueprintCallable)
    void SetObserverPositionInCanvas(bool bSizeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetCanvasProperties(UCanvasPanel* Canvas, UWidget* MapWidget, UWidget* PlayerWidget, UWidget* ObserverWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPlayerPositionDecentralized(FVector2D TestCanvasSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMapBounds(FVector2D& OutMinBounds, FVector2D& OutMaxBounds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCanvasSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCanvasAlignment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateRenderTarget(UPARAM(Ref) TArray<FRenderTargetMinimap>& Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTexture(UTexture* NewTexture);
    
};

