#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESkillSlot.h"
#include "Templates/SubclassOf.h"
#include "SkillsPanel.generated.h"

class UGridPanel;
class UHeroSkillsComponent;
class USkill;
class USkillButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USkillsPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHeroSkillsComponent> SkillsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* MainSkillsGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* UtilitySkillsGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SkillButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USkill*> MainSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USkill*> UtilitySkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USkillButtonBase*> MainSkillWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USkillButtonBase*> UtilitySKillWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillButtonBase> MainSkillWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillButtonBase> UtilitySkillWidgetClass;
    
    USkillsPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkillRemoved(TSubclassOf<USkill> OldSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkillAdded(TSubclassOf<USkill> NewSkill);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(UHeroSkillsComponent* NewContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSkillsSwapped(ESkillSlot SkillType, int32 FirstIndex, int32 SecondIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSkillChanged(USkill* InSkill, ESkillSlot InSlot, int32 InIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddSkill(TSubclassOf<USkill> InSkill) const;
    
};

