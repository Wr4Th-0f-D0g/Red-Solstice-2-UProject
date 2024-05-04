#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "InteractableWidgetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractableWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemFullDescription;
    
    UInteractableWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleWidgetVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetDetails(AActor* Actor, FText InItemName, FText InItemShortDescription, FText InItemFullDescription);
    
};

