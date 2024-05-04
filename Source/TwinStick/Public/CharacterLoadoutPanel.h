#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Armorspace.h"
#include "CharacterEquipment.h"
#include "EEquipAction.h"
#include "EEquipementPanel.h"
#include "ESolsticeHeroClass.h"
#include "ESuitSection.h"
#include "ModuleInfo.h"
#include "ModuleListRequestedDelegate.h"
#include "PowerSuitModel.h"
#include "StrategyMenuBase.h"
#include "SuitSectionData.h"
#include "Templates/SubclassOf.h"
#include "CharacterLoadoutPanel.generated.h"

class AHeroCharacterBase;
class AStrategyPlayerState;
class UArmorSectionPanel;
class UCharacterEquipmentPanel;
class UGridPanel;
class USkillsPanel;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterLoadoutPanel : public UStrategyMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* ArmorSectionsUG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorSectionPanel> ArmorSectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterEquipmentPanel* EquipmentPanelUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterEquipmentPanel* EquipmentPanelLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESuitSection ActiveSuitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrimaryLoadoutPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuitSectionData> PreviewSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuitSectionData> SuitSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillsPanel* SkillsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorSectionPanel* StratagemsArmorPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModuleInfo> EquippedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEquipment> EquippedGear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModuleListRequested OnModuleListRequested;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UWidget*> WidgetsToBackTags;
    
    UCharacterLoadoutPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEquipmentSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHero(const FPowerSuitModel& HeroClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupArmorSectionGrid(const TArray<FSuitSectionData>& Sections, const TArray<FIntPoint> Positions);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AStrategyPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorkbenchView();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBackWidgetForTag(UWidget* NewWidget, FGameplayTag WidgetBackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PowerUseChanged(float MaxPower, float PowerUse);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ModuleListRequested(ESuitSection SuitSection);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadPremadeForClass(ESolsticeHeroClass NewClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleModulesRequested(ESuitSection SuitSection);
    
    UFUNCTION(BlueprintCallable)
    void HandleModuleChanged(const FModuleInfo& InModule, bool InAdded, ESuitSection InSection);
    
    UFUNCTION(BlueprintCallable)
    bool HandleModuleActionRequested(const FModuleInfo& InModule, EEquipAction InAction);
    
    UFUNCTION(BlueprintCallable)
    bool HandleEquipmentActionRequested(const FCharacterEquipment& InEquipment, EEquipementPanel InPanel, EEquipAction InAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleColorRequested(FLinearColor InColor, bool InPrimaryColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FArmorspace GetAvailableSuitSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ESuitSection, int32> GetAvailableRoomMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableRoomForSection(ESuitSection InSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArmorSectionPanel* GetArmorSection(ESuitSection InSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArmorSectionPanel* GetActiveArmorSection() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfigureArmorSections(const TArray<FSuitSectionData>& Sections);
    
};

