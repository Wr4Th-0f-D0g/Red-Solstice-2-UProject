#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "MapSystem_MinimapDrawCanvas.generated.h"

class ACharacter;
class AMapSystemManager;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystem_MinimapDrawCanvas : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapSystemManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Zoom;
    
    UMapSystem_MinimapDrawCanvas();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayerCharacter() const;
    
};

