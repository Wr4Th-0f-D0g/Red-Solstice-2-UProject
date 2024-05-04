#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterEquipment.h"
#include "EEquipementPanel.h"
#include "EquipmentActionRequestedDelegate.h"
#include "EquipmentButton.generated.h"

class AStrategyPlayerState;
class UEquipmentPayload;
class UImage;
class UModuleEquipStatus;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEquipmentButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentActionRequested RequestEquipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EquipmentIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEquipment Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentPayload* Payload;
    
    UEquipmentButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEquipment(const FCharacterEquipment& NewEquipment);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveModuleFromParent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItem() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleEquippedModulesChanged(AStrategyPlayerState* PS, const UModuleEquipStatus* MES);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipementPanel GetEquipmentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquippedModulesChanged(const UModuleEquipStatus* MES, bool AlreadyEquipped, AStrategyPlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPreviewChanged(const FCharacterEquipment& PreviewEquipment, bool IsHovered, bool IsDragged);
    
};

