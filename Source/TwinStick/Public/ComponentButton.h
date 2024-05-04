#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EEquipModuleFailure.h"
#include "ESuitSection.h"
#include "ModuleActionRequestedDelegate.h"
#include "ModuleInfo.h"
#include "ComponentButton.generated.h"

class AStrategyPlayerState;
class UImage;
class UModuleEquipStatus;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UComponentButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleActionRequested RequestEquipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMounted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ModuleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleInfo Module;
    
    UComponentButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetModule(const FModuleInfo& NewModule);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveModuleFromParent();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleEquippedModulesChanged(AStrategyPlayerState* PS, const UModuleEquipStatus* MES);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<ESuitSection> GetArmorSectionsModuleIsLocatedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquippedModulesChanged(const UModuleEquipStatus* MES, EEquipModuleFailure MyEquipStatus, bool CanBeEquiped);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPreviewChanged(const FModuleInfo& PreviewModule, bool IsHovered, bool IsDragged);
    
};

