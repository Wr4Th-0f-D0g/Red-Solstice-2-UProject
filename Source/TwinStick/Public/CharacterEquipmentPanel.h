#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterEquipment.h"
#include "EAttribute.h"
#include "EEquipementPanel.h"
#include "EquipmentListRequestedDelegate.h"
#include "PowerSuitModel.h"
#include "Templates/SubclassOf.h"
#include "CharacterEquipmentPanel.generated.h"

class AHeroCharacterBase;
class AStrategyPlayerState;
class UEquipmentGrid;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterEquipmentPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHeroCharacterBase> Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> PS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentGrid* PrimaryEquipmentGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentGrid* SecondaryEquipmentGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEquipmentGrid> EquipmentGridClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* EquipmentVB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentListRequested OnEquipmentListRequested;
    
    UCharacterEquipmentPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponMovePenaltyChanged(float MovePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowModuleSelectionPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterEquipmentPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHero(const FPowerSuitModel& HeroClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AStrategyPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentListRequested(EEquipementPanel InPanel);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentChanged(const FCharacterEquipment& InEquipment, bool InAdded, EEquipementPanel InPanel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEquipmentGrid* GetEquipmentGridFor(const FCharacterEquipment& InEquipment, EEquipementPanel InPanel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipmentSlotsChanged(EAttribute Attribute, float OldValue, float NewValue);
    
};

