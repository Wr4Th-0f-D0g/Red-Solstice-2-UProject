#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterEquipment.h"
#include "CharacterWeaponData.h"
#include "EEquipementPanel.h"
#include "EquipmentListRequestedDelegate.h"
#include "Templates/SubclassOf.h"
#include "EquipmentGrid.generated.h"

class UEquipmentButton;
class UEquipmentSlotButton;
class UGridPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEquipmentGrid : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* EquipmentGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEquipmentSlotButton> EquipmentButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipementPanel PanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEquipmentButton> EquipmentWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEquipmentButton*> EquipmentWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEquipment> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEquipmentButton> WeaponWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentButton* EquippedWeaponWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEquipment EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EquipmentGridLabel;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentListRequested OnEquipmentListRequested;
    
    UEquipmentGrid();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponEquipped(const FCharacterWeaponData& Weapon, const FString& WeaponName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupGridButtons(int32 Slots);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupEquipmentGrid(int32 Slots);
    
    UFUNCTION(BlueprintCallable)
    void RequestEquipmentList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightPanel(const FCharacterEquipment& PreviewEquipment, bool IsAllowedOnPanel, bool PreviewActive);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentPreviewChanged(const FCharacterEquipment& PreviewEquipment, bool IsHovered, bool IsDragged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GridTypeSet(EEquipementPanel GridType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GridSpaceChanged(int32 TotalSpace, int32 FreeSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedWeaponSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterEquipment GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedItemSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipementPanel GetEquipmentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipmentGridSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableWeaponSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSize() const;
    
};

