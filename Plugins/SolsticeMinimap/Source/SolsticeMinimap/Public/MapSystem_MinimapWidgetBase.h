#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MapSystemWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "MapSystem_MinimapWidgetBase.generated.h"

class UMapSystemWidget_PingElementBase;
class UMapSystem_MinimapDrawCanvas;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystem_MinimapWidgetBase : public UMapSystemWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapSystem_MinimapDrawCanvas* DrawingCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapSystemWidget_PingElementBase*> MinimapPings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUnusedPingElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapSystemWidget_PingElementBase*> UnusedMinimapPingElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSystemWidget_PingElementBase> MinimapPingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPanOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPanOffsetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UpdatedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRotateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MinimapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MinimapCircleMaskedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMinimapEnabled;
    
    UMapSystem_MinimapWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateElements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinimapLocationTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemovePingElement(UMapSystemWidget_PingElementBase* Element);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimapUpdated(UMaterialInstanceDynamic* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimapInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMinimapPan();
    
    UFUNCTION(BlueprintCallable)
    void CreatePingElement(FVector2D Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMinimapLocationTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddMinimapRotation(float Yaw);
    
};

