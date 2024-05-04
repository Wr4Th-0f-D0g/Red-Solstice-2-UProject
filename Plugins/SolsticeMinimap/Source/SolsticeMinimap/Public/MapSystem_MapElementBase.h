#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "MapElementInfo.h"
#include "OnLargeMapElementHoveredDelegate.h"
#include "OnLargeMapElementUnHoveredDelegate.h"
#include "MapSystem_MapElementBase.generated.h"

class AActor;
class ACharacter;
class AMapSystemManager;
class UMapSystem_TooltipWidgetBase;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystem_MapElementBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLargeMapElementHovered OnMapElementHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLargeMapElementUnHovered OnMapElementUnHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisibilityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ElementActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentViewportPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMapSystem_TooltipWidgetBase* ToolTipWidgetRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapSystemManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsElementSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ElementHoveredIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ElementSelectedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRotationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapElementInfo MapElementInfo;
    
public:
    UMapSystem_MapElementBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetOutOfRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetInRange();
    
    UFUNCTION(BlueprintCallable)
    void OnUnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapElementInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnElementIconChanged(UObject* NewElementIcon, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDistanceFromPlayer();
    
};

