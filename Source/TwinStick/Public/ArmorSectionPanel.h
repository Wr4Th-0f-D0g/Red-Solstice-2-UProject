#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EEquipModuleFailure.h"
#include "ESuitSection.h"
#include "ModuleInfo.h"
#include "ModuleListRequestedDelegate.h"
#include "SuitSectionData.h"
#include "Templates/SubclassOf.h"
#include "ArmorSectionPanel.generated.h"

class AStrategyPlayerState;
class UEquippedModuleInfo;
class UImage;
class UModuleEquipStatus;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UArmorSectionPanel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* EquippedModuleGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuitSectionData ArmorSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArmorSectionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEquippedModuleInfo> EquippedModuleInfoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEquippedModuleInfo*> EquippedModuleWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModuleInfo> EquippedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalArmorSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UModuleEquipStatus> LastEquipStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleListRequested OnModuleListRequested;
    
    UArmorSectionPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SectionSpaceChanged(int32 TotalSpace, int32 FreeSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SectionSetup(FSuitSectionData Section);
    
    UFUNCTION(BlueprintCallable)
    void RequestModuleList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PanelHasModuleByName(FName ModuleName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocalArmorSectionChanged(bool IsLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightPanel(const FModuleInfo& Module, bool IsAllowedOnSection, bool PreviewActive, EEquipModuleFailure FailReason);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviewModuleChanged(const FModuleInfo& Module, bool IsHovered, bool IsDragged);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquippedModulesChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectionSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESuitSection GetSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquippedModulesChanged(const UModuleEquipStatus* ModuleEquipStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFitModule(const FModuleInfo& NewModule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveChanged(bool IsActive);
    
};

