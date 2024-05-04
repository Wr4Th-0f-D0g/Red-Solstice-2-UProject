#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "MapSystemWidget_PingElementBase.generated.h"

class UMapSystem_MinimapWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class SOLSTICEMINIMAP_API UMapSystemWidget_PingElementBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PingLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMapSystem_MinimapWidgetBase* ParentMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D MinBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D MaxBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ElementOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EdgeOffset;
    
    UMapSystemWidget_PingElementBase();

    UFUNCTION(BlueprintCallable)
    void SetPositionInCanvas(FVector2D PingLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapSystem_MinimapWidgetBase* GetParentMinimap() const;
    
};

