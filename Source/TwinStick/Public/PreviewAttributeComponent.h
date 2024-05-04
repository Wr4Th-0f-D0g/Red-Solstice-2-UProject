#pragma once
#include "CoreMinimal.h"
#include "AttributeComponent.h"
#include "EBuffChangedOperation.h"
#include "ModuleInfo.h"
#include "PreviewPowerChangedDelegate.h"
#include "PreviewAttributeComponent.generated.h"

class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UPreviewAttributeComponent : public UAttributeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* PreviewBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewModulePowerUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewModulePowerProvided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewPowerChanged OnPreviewPowerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAttributeComponent> MainAttributeComponent;
    
    UPreviewAttributeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttributeComponent(UAttributeComponent* InAttributeComp);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributesReInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributePreviewChanged(const FModuleInfo& PreviewModule, bool IsHovered, bool IsDragged);
    
};

