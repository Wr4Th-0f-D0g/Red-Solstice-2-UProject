#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "MapElement.h"
#include "MapGenerationCompleteDelegate.h"
#include "MinimapElementInfo.h"
#include "Templates/SubclassOf.h"
#include "MapSystemManager.generated.h"

class AMapSystemActorBounds;
class AObserverPawnBlockingVolume;
class UDataTable;
class UMapSystem_MapElementBase;
class UMapSystem_MapWidgetBase;
class UMapSystem_MinimapElementBase;
class UMapSystem_MinimapWidgetBase;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SOLSTICEMINIMAP_API AMapSystemManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoInitialize;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenerationComplete OnMapGenerationComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTextureNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMapInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag MinimapLocationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaticElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FMapElement> StaticElementsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FMinimapElementInfo> MinimapStaticElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FMinimapElementInfo> MinimapDynamicElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* MiniMapMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSystem_MinimapWidgetBase> MinimapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSystem_MinimapElementBase> MinimapElementWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSystem_MapWidgetBase> MapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSystem_MapElementBase> MapElementWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUnusedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingIconTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FixedZoomArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapSystemInitializationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FustrumHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BiomassRadiusTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FrustrumRenderingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BiomassRadiusTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MapPathingLineTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMapPathingLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MapPathingRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* BiomassRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapSystemActorBounds* MapBoundsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObserverPawnBlockingVolume*> ObserverBlockingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapSystem_MinimapWidgetBase* MinimapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapSystem_MapWidgetBase* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapSystem_MinimapElementBase*> UnusedMinimapElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapSystem_MapElementBase*> UnusedMapElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapSystem_MapElementBase* CurrentHoveredElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMapOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMinimapVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    AMapSystemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMapTextureFromSnapshot(float Delay, TEnumAsByte<ESceneCaptureSource> CaptureSource);
    
    UFUNCTION(BlueprintCallable)
    void ShowMinimapMap(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ShowBigMap(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapLocationTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMapActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RebuildDynamicActors();
    
    UFUNCTION(BlueprintCallable)
    void OnMapElementUnHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnMapElementHovered(UMapSystem_MapElementBase* HoveredElement);
    
    UFUNCTION(BlueprintCallable)
    void MapZoomInOut(float ZoomValue);
    
    UFUNCTION(BlueprintCallable)
    void MapTextureGenerated();
    
    UFUNCTION(BlueprintCallable)
    void MapPanRight(float RightPanAxis);
    
    UFUNCTION(BlueprintCallable)
    void MapPanForward(float ForwardPanAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinimapOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMapSystem();
    
    UFUNCTION(BlueprintCallable)
    void HandleRenderSnapshotDone(UTexture* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void CreateSnapshotByTags(UTextureRenderTarget2D* SourceRT, TArray<FName> ActorTags, const FRotator& CustomRotation, TEnumAsByte<ESceneCaptureSource> CaptureSource, bool bSetRenderDepth);
    
    UFUNCTION(BlueprintCallable)
    void ClearMinimapLocationTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddMapElement(AActor* Actor, const FMapElement& MapElement, bool bDynamic);
    
    UFUNCTION(BlueprintCallable)
    void AddMapActor(AActor* Actor, const FMapElement& MapElement);
    
};

